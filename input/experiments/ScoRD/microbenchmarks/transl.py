import re

def parse_ptx(ptx_code):
    # Function to translate PTX to C-like pseudocode
    def translate_instruction(instruction):
        # Patterns for instructions and their C-like pseudocode equivalents
        patterns = {
            # Register Declarations
            r".reg\s+\.pred\s+%p<(\d+)>": r"int p[\1];",
            r".reg\s+\.b32\s+%r<(\d+)>": r"int r[\1];",
            r".reg\s+\.b64\s+%rd<(\d+)>": r"long rd[\1];",
            r".reg\s+\.f32\s+%f<(\d+)>": r"float f[\1];",
            r".reg\s+\.f64\s+%fd<(\d+)>": r"double fd[\1];",

            # Memory Operations
            #load parameters
            r"ld.param.u64\s+%rd(\d+), \[(.*)\]": r"rd[\1] = \2;",
            #loads and stores
            r"ld(.*?)%r(\d+), \[%rd(\d+)\]": r" __VERIFIER_memory_scope_device();\nr[\2] = atomic_load(rd[\3]);",
            r"st(.*?)\[%rd(\d+)\], %r(\d+)": r"__VERIFIER_memory_scope_device();\natomic_store(rd[\3], r[\3]);",

            # Address Conversion
            r"cvta.to.global.u64\s+%rd(\d+), %rd(\d+)": r"rd[\1] = global_address(rd[\2]);",

            # Move and Type Conversion
            r"mov.u32\s+%r(\d+), %ctaid.x": r"r[\1] = group_id;",
            r"cvt.s64.s32\s+%rd(\d+), %r(\d+)": r"rd[\1] = (int64_t)r[\2];",
            r"cvt.f32.s32\s+%f(\d+), %r(\d+)": r"f[\1] = (float)r[\2];",
            r"cvt.rn.f32.f64\s+%f(\d+), %fd(\d+)": r"f[\1] = (float)fd[\2];",

            # Arithmetic Operations
            r"add(.*?)%?(\w+), (\d+), (\d+)": r"[\2] = \3 + \4;",
            r"add(.*?)%?(\w+), %?(\w+), (\d+)": r"[\2] = [\3] + \4;",
            r"add(.*?)%?(\w+), %?(\w+), %?(\w+)": r"[\2] = [\3] + [\4];",
            r"sub(.*?)?(\w+), (\d+), (\d+)": r"[\2] = \3 - \4;",
            r"sub(.*?)?(\w+), %?(\w+), (\d+)": r"[\2] = [\3] - \4;",
            r"sub(.*?)?(\w+), %?(\w+), %?(\w+)": r"[\2] = [\3] - [\4];",
            r"mul(.*?)?(\w+), (\d+), (\d+)": r"[\2] = \3 * \4;",
            r"mul(.*?)?(\w+), %?(\w+), (\d+)": r"[\2] = [\3] * \4;",
            r"mul(.*?)?(\w+), %?(\w+), %?(\w+)": r"[\2] = [\3] * [\4];",
            r"div(.*?)?(\w+), (\d+), (\d+)": r"[\2] = \3 / \4;",
            r"div(.*?)?(\w+), %?(\w+), (\d+)": r"[\2] = [\3] / \4;",
            r"div(.*?)?(\w+), %?(\w+), %?(\w+)": r"[\2] = [\3] / [\4];",
            #float
            r"div.rn.f32\s+%f(\d+), %f(\d+), %f(\d+)": r"f[\1] = f[\2] / f[\3];",

            # Logical and Comparison Operations
            r"setp.ne.s32\s+%p(\d+), %r(\d+), (\d+)": r"p[\1] = (r[\2] != \3);",
            r"setp.eq.s32\s+%p(\d+), %r(\d+), (\d+)": r"p[\1] = (r[\2] == \3);",
            r"setp.lt.s32\s+%p(\d+), %r(\d+), %r(\d+)": r"p[\1] = (r[\2] < r[\3]);",
            r"setp.ge.s32\s+%p(\d+), %r(\d+), %r(\d+)": r"p[\1] = (r[\2] >= r[\3]);",

            # Branching
            r"@%p(\d+) bra\s+\$(.*)": r"if (p[\1]) goto \2;",
            r"bra.uni\s+\$(.*)": r"goto \1;",
            r"\$(.*)": r"\1;",

            # Synchronization
            r"bar.sync (\d+)": r"__syncthreads();",

            # Bitwise Operations
            r"shl.b64\s+%rd(\d+), %rd(\d+), (\d+)": r"rd[\1] = rd[\2] << \3;",
            r"shr.u32\s+%r(\d+), %r(\d+), (\d+)": r"r[\1] = (unsigned int)r[\2] >> \3;",
            r"and.b32\s+%r(\d+), %r(\d+), %r(\d+)": r"r[\1] = r[\2] & r[\3];",
            r"or.b32\s+%r(\d+), %r(\d+), %r(\d+)": r"r[\1] = r[\2] | r[\3];",

            # Atomic Operations
            r"atom.global.add.u32\s+%r(\d+), \[%rd(\d+)\], (\d+)": r"__VERIFIER_memory_scope_device();\nr[\1] = atomicAdd((unsigned int *)rd[\2], \3);",
            r"atom.global.add.u32\s+%r(\d+), \[%rd(\d+)\], %r(\d+)": r"__VERIFIER_memory_scope_device();\nr[\1] = atomicAdd((unsigned int *)rd[\2], r\3);",
            r"atom.global.add.u32\s+%r(\d+), \[%rd(\d+)\], %rd(\d+)": r"__VERIFIER_memory_scope_device();\nr[\1] = atomicAdd((unsigned int *)rd[\2], rd\3);",
            r"atom.global.cta.exch.b32\s+%r(\d+), \[%rd(\d+)\], %r(\d+)": r"__VERIFIER_memory_scope_work_group();\nr[\1] = atomic_exchange_explicit((unsigned int *)r[\2], r\3);",
            r"atom.global.cta.exch.b32\s+%r(\d+), \[%rd(\d+)\], %rd(\d+)": r"__VERIFIER_memory_scope_work_group();\nr[\1] = atomic_exchange_explicit((unsigned int *)r[\2], rd\3);",
            r"atom.global.cta.exch.b32\s+%r(\d+), \[%rd(\d+)\], (\d+)": r"__VERIFIER_memory_scope_work_group();\nr[\1] = atomic_exchange_explicit((unsigned int *)rd[\2], \3);",
      

            # Return
            r"ret": r"return;",
        }

        regpattern = re.compile(r'\[([a-zA-Z]+)(\d+)\]')
        # Translate the instruction using the patterns
        temp = instruction
        for pattern, replacement in patterns.items():
            instruction = re.sub(pattern, replacement, instruction)
        instruction = regpattern.sub(r'\1[\2]', instruction)
        print([temp,instruction])
        return instruction

    # Split the PTX code into lines
    ptx_lines = ptx_code.strip().split('\n')

    # Process each line and translate it
    translated_lines = []
    for line in ptx_lines:
        # Skip empty lines and comments
        if line.strip() == '' or line.strip().startswith('//'):
            continue
        translated_line = translate_instruction(line.strip())
        translated_lines.append(translated_line)

    # Join the translated lines into the final pseudocode
    return '\n'.join(translated_lines)

ptx_code = """ 
{
	.reg .pred 	%p<8>;
	.reg .b32 	%r<33>;
	.reg .b64 	%rd<25>;


	mov.u32 	%r1, %tid.x;
	mov.u32 	%r32, %ctaid.x;
	cvt.s64.s32 	%rd1, %r32;
	mul.wide.s32 	%rd4, %r32, 4;
	mov.u64 	%rd5, bases;
	add.s64 	%rd2, %rd5, %rd4;
	mov.u64 	%rd6, blockIds;
	add.s64 	%rd3, %rd6, %rd4;
	setp.ne.s32 	%p1, %r1, 0;
	@%p1 bra 	$L__BB0_2;

	shl.b64 	%rd7, %rd1, 2;
	mov.u64 	%rd8, head;
	add.s64 	%rd9, %rd8, %rd7;
	atom.global.add.u32 	%r16, [%rd9], 2;
	st.global.u32 	[%rd2], %r16;
	atom.global.cta.exch.b32 	%r17, [%rd3], %r32;

$L__BB0_2:
	bar.sync 	0;
	shl.b64 	%rd10, %rd1, 2;
	mov.u64 	%rd11, tail;
	add.s64 	%rd12, %rd11, %rd10;
	ld.global.u32 	%r31, [%rd12];
	ld.global.u32 	%r29, [%rd2];
	setp.ge.s32 	%p2, %r29, %r31;
	@%p2 bra 	$L__BB0_13;

	mov.u64 	%rd14, graphComponents;
	mov.u64 	%rd17, head;

$L__BB0_4:
	add.s32 	%r8, %r29, %r1;
	setp.ge.s32 	%p3, %r8, %r31;
	@%p3 bra 	$L__BB0_6;

	mul.wide.s32 	%rd13, %r8, 4;
	add.s64 	%rd15, %rd14, %rd13;
	st.global.u32 	[%rd15], %r8;

$L__BB0_6:
	bar.sync 	0;
	@%p1 bra 	$L__BB0_8;

	mul.wide.s32 	%rd16, %r32, 4;
	add.s64 	%rd18, %rd17, %rd16;
	atom.global.add.u32 	%r18, [%rd18], 2;
	st.global.u32 	[%rd2], %r18;

$L__BB0_8:
	bar.sync 	0;
	ld.global.u32 	%r29, [%rd2];
	setp.lt.s32 	%p5, %r29, %r31;
	@%p5 bra 	$L__BB0_12;

	bar.sync 	0;
	@%p1 bra 	$L__BB0_11;

	add.s32 	%r19, %r32, 1;
	shr.u32 	%r20, %r19, 31;
	add.s32 	%r21, %r19, %r20;
	and.b32  	%r22, %r21, -2;
	sub.s32 	%r23, %r19, %r22;
	mul.wide.s32 	%rd19, %r23, 4;
	add.s64 	%rd21, %rd17, %rd19;
	atom.global.add.u32 	%r24, [%rd21], 0;
	atom.global.add.u32 	%r25, [%rd21], 2;
	st.global.u32 	[%rd2], %r25;
	atom.global.cta.exch.b32 	%r26, [%rd3], %r23;

$L__BB0_11:
	bar.sync 	0;
	atom.global.cta.add.u32 	%r32, [%rd3], 0;
	ld.global.u32 	%r29, [%rd2];
	mul.wide.s32 	%rd22, %r32, 4;
	add.s64 	%rd24, %rd11, %rd22;
	ld.global.u32 	%r31, [%rd24];

$L__BB0_12:
	setp.lt.s32 	%p7, %r29, %r31;
	@%p7 bra 	$L__BB0_4;

$L__BB0_13:
	ret;

}
	// .globl	_Z10linkKernelv
.visible .entry _Z10linkKernelv()
{
	.reg .pred 	%p<13>;
	.reg .b32 	%r<48>;
	.reg .b64 	%rd<40>;


	mov.u32 	%r1, %tid.x;
	mov.u32 	%r47, %ctaid.x;
	cvt.s64.s32 	%rd1, %r47;
	mul.wide.s32 	%rd5, %r47, 4;
	mov.u64 	%rd6, bases;
	add.s64 	%rd2, %rd6, %rd5;
	mov.u64 	%rd7, blockIds;
	add.s64 	%rd3, %rd7, %rd5;
	setp.ne.s32 	%p1, %r1, 0;
	@%p1 bra 	$L__BB1_2;

	shl.b64 	%rd8, %rd1, 2;
	mov.u64 	%rd9, head;
	add.s64 	%rd10, %rd9, %rd8;
	atom.global.add.u32 	%r23, [%rd10], 2;
	st.global.u32 	[%rd2], %r23;
	atom.global.cta.exch.b32 	%r24, [%rd3], %r47;

$L__BB1_2:
	bar.sync 	0;
	shl.b64 	%rd11, %rd1, 2;
	mov.u64 	%rd12, tail;
	add.s64 	%rd13, %rd12, %rd11;
	ld.global.u32 	%r45, [%rd13];
	ld.global.u32 	%r41, [%rd2];
	setp.ge.s32 	%p2, %r41, %r45;
	@%p2 bra 	$L__BB1_15;

	mov.u64 	%rd15, edgeSetU;
	mov.u64 	%rd17, edgeSetV;

$L__BB1_4:
	add.s32 	%r8, %r41, %r1;
	setp.ge.s32 	%p3, %r8, %r45;
	@%p3 bra 	$L__BB1_8;

	mul.wide.s32 	%rd14, %r8, 4;
	add.s64 	%rd16, %rd15, %rd14;
	add.s64 	%rd18, %rd17, %rd14;
	ld.global.u32 	%r25, [%rd18];
	ld.global.u32 	%r26, [%rd16];
	mul.wide.s32 	%rd19, %r26, 4;
	mov.u64 	%rd20, graphComponents;
	add.s64 	%rd21, %rd20, %rd19;
	atom.global.add.u32 	%r44, [%rd21], 0;
	mul.wide.s32 	%rd22, %r25, 4;
	add.s64 	%rd23, %rd20, %rd22;
	atom.global.add.u32 	%r43, [%rd23], 0;
	setp.eq.s32 	%p4, %r44, %r43;
	@%p4 bra 	$L__BB1_8;

$L__BB1_6:
	max.s32 	%r27, %r44, %r43;
	sub.s32 	%r28, %r43, %r27;
	add.s32 	%r13, %r28, %r44;
	mul.wide.s32 	%rd24, %r27, 4;
	add.s64 	%rd4, %rd20, %rd24;
	atom.global.cas.b32 	%r29, [%rd4], %r27, %r13;
	setp.eq.s32 	%p5, %r29, %r27;
	setp.eq.s32 	%p6, %r29, %r13;
	or.pred  	%p7, %p5, %p6;
	@%p7 bra 	$L__BB1_8;

	atom.global.add.u32 	%r30, [%rd4], 0;
	mul.wide.s32 	%rd26, %r30, 4;
	add.s64 	%rd28, %rd20, %rd26;
	atom.global.add.u32 	%r44, [%rd28], 0;
	mul.wide.s32 	%rd29, %r13, 4;
	add.s64 	%rd30, %rd20, %rd29;
	atom.global.add.u32 	%r43, [%rd30], 0;
	setp.ne.s32 	%p8, %r44, %r43;
	@%p8 bra 	$L__BB1_6;

$L__BB1_8:
	bar.sync 	0;
	@%p1 bra 	$L__BB1_10;

	mul.wide.s32 	%rd31, %r47, 4;
	mov.u64 	%rd32, head;
	add.s64 	%rd33, %rd32, %rd31;
	atom.global.add.u32 	%r31, [%rd33], 2;
	st.global.u32 	[%rd2], %r31;

$L__BB1_10:
	bar.sync 	0;
	ld.global.u32 	%r41, [%rd2];
	setp.lt.s32 	%p10, %r41, %r45;
	@%p10 bra 	$L__BB1_14;

	bar.sync 	0;
	@%p1 bra 	$L__BB1_13;

	add.s32 	%r32, %r47, 1;
	shr.u32 	%r33, %r32, 31;
	add.s32 	%r34, %r32, %r33;
	and.b32  	%r35, %r34, -2;
	sub.s32 	%r36, %r32, %r35;
	mul.wide.s32 	%rd34, %r36, 4;
	mov.u64 	%rd35, head;
	add.s64 	%rd36, %rd35, %rd34;
	atom.global.add.u32 	%r37, [%rd36], 0;
	atom.global.add.u32 	%r38, [%rd36], 2;
	st.global.u32 	[%rd2], %r38;
	atom.global.cta.exch.b32 	%r39, [%rd3], %r36;

$L__BB1_13:
	bar.sync 	0;
	atom.global.cta.add.u32 	%r47, [%rd3], 0;
	ld.global.u32 	%r41, [%rd2];
	mul.wide.s32 	%rd37, %r47, 4;
	add.s64 	%rd39, %rd12, %rd37;
	ld.global.u32 	%r45, [%rd39];

$L__BB1_14:
	setp.lt.s32 	%p12, %r41, %r45;
	@%p12 bra 	$L__BB1_4;

$L__BB1_15:
	ret;

}"""

parse_ptx(ptx_code)