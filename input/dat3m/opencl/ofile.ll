; ModuleID = '/tmp/__genmc.ll'
source_filename = "tr-caslock.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.__VERIFIER_inode = type { %struct.__VERIFIER_mutex_t, i32, i32, i32, [64 x i8] }
%struct.__VERIFIER_mutex_t = type { i32 }
%struct.__VERIFIER_file = type { %struct.inode*, i32, i32, %struct.__VERIFIER_mutex_t, i32 }
%struct.inode = type opaque
%struct._IO_FILE = type opaque
%struct.__VERIFIER_barrier_t = type { i32 }
%struct.__VERIFIER_attr_t = type { i32 }

@l = dso_local global i32 0, align 4, !dbg !0
@x = dso_local global i32 0, align 4, !dbg !18
@A = dso_local global [16 x i32] zeroinitializer, align 16, !dbg !21
@__genmc_dir_inode = dso_local addrspace(42) global %struct.__VERIFIER_inode zeroinitializer, align 4, !dbg !26
@__genmc_dummy_file = dso_local addrspace(42) global %struct.__VERIFIER_file zeroinitializer, align 8, !dbg !44
@errno = dso_local global i32 0, align 4, !dbg !55
@stdin = dso_local global %struct._IO_FILE* null, align 8, !dbg !58
@stdout = dso_local global %struct._IO_FILE* null, align 8, !dbg !63
@stderr = dso_local global %struct._IO_FILE* null, align 8, !dbg !65
@bard = dso_local global %struct.__VERIFIER_barrier_t zeroinitializer, align 4, !dbg !67
@barg = dso_local global [5 x %struct.__VERIFIER_barrier_t] zeroinitializer, align 16, !dbg !75

; Function Attrs: noinline nounwind uwtable
define dso_local void @mutex_test(i32 noundef %global_id, i32 noundef %group_id, i32 noundef %local_id, i32 noundef %kernel_id) #0 !dbg !90 {
entry:
  call void (...) @__VERIFIER_memory_scope_device(), !dbg !94
  br label %while.cond, !dbg !95

while.cond:                                       ; preds = %while.body, %entry
  %bound.val = phi i32 [ %while.cond.bound.dec, %while.body ], [ 8, %entry ]
  %while.cond.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.bound.cmp)
  %while.cond.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !96
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !96
  br i1 %1, label %cmpxchg.continue, label %cmpxchg.continue, !dbg !96

cmpxchg.continue:                                 ; preds = %while.cond, %while.cond
  %conv = zext i1 %1 to i32, !dbg !96
  %cmp = icmp eq i32 %conv, 0, !dbg !97
  %2 = xor i1 %cmp, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !95
  br i1 %cmp, label %while.body, label %while.end, !dbg !95

while.body:                                       ; preds = %cmpxchg.continue
  call void @__VERIFIER_spin_end(i1 false), !dbg !95
  br label %while.cond, !dbg !95, !llvm.loop !98

while.end:                                        ; preds = %cmpxchg.continue
  call void (...) @__VERIFIER_memory_scope_system(), !dbg !101
  %3 = load i32, i32* @x, align 4, !dbg !102
  call void (...) @__VERIFIER_memory_scope_system(), !dbg !103
  %add = add nsw i32 %3, 1, !dbg !104
  store i32 %add, i32* @x, align 4, !dbg !105
  call void (...) @__VERIFIER_memory_scope_device(), !dbg !106
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !107
  call void (...) @__VERIFIER_memory_scope_system(), !dbg !108
  %idxprom = sext i32 %global_id to i64, !dbg !109
  %arrayidx = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom, !dbg !109
  store i32 %3, i32* %arrayidx, align 4, !dbg !110
  ret void, !dbg !111
}

; Function Attrs: nofree nosync nounwind readnone speculatable willreturn
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

declare void @__VERIFIER_memory_scope_device(...) #2

declare void @__VERIFIER_memory_scope_system(...) #2

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel00(i8* %arg) #0 !dbg !112 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !115
  br label %while.cond.i, !dbg !117

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !118
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !118
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !118

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !118
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !119
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !117
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !117

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !117
  br label %while.cond.i, !dbg !117, !llvm.loop !120

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !122
  %3 = load i32, i32* @x, align 4, !dbg !123
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !124
  %add.i = add nsw i32 %3, 1, !dbg !125
  store i32 %add.i, i32* @x, align 4, !dbg !126
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !127
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !128
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !129
  %idxprom.i = sext i32 0 to i64, !dbg !130
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !130
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !131
  ret i8* null, !dbg !132
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel01(i8* %arg) #0 !dbg !133 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !134
  br label %while.cond.i, !dbg !136

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !137
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !137
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !137

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !137
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !138
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !136
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !136

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !136
  br label %while.cond.i, !dbg !136, !llvm.loop !139

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !141
  %3 = load i32, i32* @x, align 4, !dbg !142
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !143
  %add.i = add nsw i32 %3, 1, !dbg !144
  store i32 %add.i, i32* @x, align 4, !dbg !145
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !146
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !147
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !148
  %idxprom.i = sext i32 1 to i64, !dbg !149
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !149
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !150
  ret i8* null, !dbg !151
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel10(i8* %arg) #0 !dbg !152 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !153
  br label %while.cond.i, !dbg !155

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !156
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !156
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !156

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !156
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !157
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !155
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !155

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !155
  br label %while.cond.i, !dbg !155, !llvm.loop !158

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !160
  %3 = load i32, i32* @x, align 4, !dbg !161
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !162
  %add.i = add nsw i32 %3, 1, !dbg !163
  store i32 %add.i, i32* @x, align 4, !dbg !164
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !165
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !166
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !167
  %idxprom.i = sext i32 2 to i64, !dbg !168
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !168
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !169
  ret i8* null, !dbg !170
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel11(i8* %arg) #0 !dbg !171 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !172
  br label %while.cond.i, !dbg !174

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !175
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !175
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !175

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !175
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !176
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !174
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !174

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !174
  br label %while.cond.i, !dbg !174, !llvm.loop !177

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !179
  %3 = load i32, i32* @x, align 4, !dbg !180
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !181
  %add.i = add nsw i32 %3, 1, !dbg !182
  store i32 %add.i, i32* @x, align 4, !dbg !183
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !184
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !185
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !186
  %idxprom.i = sext i32 3 to i64, !dbg !187
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !187
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !188
  ret i8* null, !dbg !189
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel20(i8* %arg) #0 !dbg !190 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !191
  br label %while.cond.i, !dbg !193

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !194
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !194
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !194

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !194
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !195
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !193
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !193

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !193
  br label %while.cond.i, !dbg !193, !llvm.loop !196

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !198
  %3 = load i32, i32* @x, align 4, !dbg !199
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !200
  %add.i = add nsw i32 %3, 1, !dbg !201
  store i32 %add.i, i32* @x, align 4, !dbg !202
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !203
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !204
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !205
  %idxprom.i = sext i32 4 to i64, !dbg !206
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !206
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !207
  ret i8* null, !dbg !208
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel21(i8* %arg) #0 !dbg !209 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !210
  br label %while.cond.i, !dbg !212

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !213
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !213
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !213

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !213
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !214
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !212
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !212

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !212
  br label %while.cond.i, !dbg !212, !llvm.loop !215

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !217
  %3 = load i32, i32* @x, align 4, !dbg !218
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !219
  %add.i = add nsw i32 %3, 1, !dbg !220
  store i32 %add.i, i32* @x, align 4, !dbg !221
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !222
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !223
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !224
  %idxprom.i = sext i32 5 to i64, !dbg !225
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !225
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !226
  ret i8* null, !dbg !227
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel30(i8* %arg) #0 !dbg !228 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !229
  br label %while.cond.i, !dbg !231

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !232
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !232
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !232

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !232
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !233
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !231
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !231

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !231
  br label %while.cond.i, !dbg !231, !llvm.loop !234

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !236
  %3 = load i32, i32* @x, align 4, !dbg !237
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !238
  %add.i = add nsw i32 %3, 1, !dbg !239
  store i32 %add.i, i32* @x, align 4, !dbg !240
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !241
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !242
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !243
  %idxprom.i = sext i32 6 to i64, !dbg !244
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !244
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !245
  ret i8* null, !dbg !246
}

; Function Attrs: noinline nounwind uwtable
define dso_local i8* @kernel31(i8* %arg) #0 !dbg !247 {
entry:
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !248
  br label %while.cond.i, !dbg !250

while.cond.i:                                     ; preds = %while.body.i, %entry
  %bound.val = phi i32 [ %while.cond.i.bound.dec, %while.body.i ], [ 8, %entry ]
  %while.cond.i.bound.cmp = icmp eq i32 %bound.val, 0
  call void @__VERIFIER_kill_thread(i1 %while.cond.i.bound.cmp)
  %while.cond.i.bound.dec = add nsw i32 %bound.val, -1
  %0 = cmpxchg i32* @l, i32 0, i32 1 acquire acquire, align 4, !dbg !251
  %1 = extractvalue { i32, i1 } %0, 1, !dbg !251
  br i1 %1, label %cmpxchg.continue.i, label %cmpxchg.continue.i, !dbg !251

cmpxchg.continue.i:                               ; preds = %while.cond.i, %while.cond.i
  %conv.i = zext i1 %1 to i32, !dbg !251
  %cmp.i = icmp eq i32 %conv.i, 0, !dbg !252
  %2 = xor i1 %cmp.i, true
  call void @__VERIFIER_spin_end(i1 %2), !dbg !250
  br i1 %cmp.i, label %while.body.i, label %mutex_test.exit, !dbg !250

while.body.i:                                     ; preds = %cmpxchg.continue.i
  call void @__VERIFIER_spin_end(i1 false), !dbg !250
  br label %while.cond.i, !dbg !250, !llvm.loop !253

mutex_test.exit:                                  ; preds = %cmpxchg.continue.i
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !255
  %3 = load i32, i32* @x, align 4, !dbg !256
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !257
  %add.i = add nsw i32 %3, 1, !dbg !258
  store i32 %add.i, i32* @x, align 4, !dbg !259
  call void (...) @__VERIFIER_memory_scope_device() #5, !dbg !260
  store atomic i32 0, i32* @l monotonic, align 4, !dbg !261
  call void (...) @__VERIFIER_memory_scope_system() #5, !dbg !262
  %idxprom.i = sext i32 7 to i64, !dbg !263
  %arrayidx.i = getelementptr inbounds [16 x i32], [16 x i32]* @A, i64 0, i64 %idxprom.i, !dbg !263
  store i32 %3, i32* %arrayidx.i, align 4, !dbg !264
  ret i8* null, !dbg !265
}

; Function Attrs: noinline nounwind uwtable
define dso_local i32 @main(i32 noundef %argc, i8** noundef %argv) #0 !dbg !266 {
entry:
  %mul = mul nsw i32 1, 8, !dbg !271
  %0 = zext i32 %mul to i64, !dbg !272
  %vla = alloca i64, i64 %0, align 16, !dbg !272
  %call = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel00, i8* noundef null) #5, !dbg !273
  %conv = sext i32 %call to i64, !dbg !273
  %arrayidx = getelementptr inbounds i64, i64* %vla, i64 0, !dbg !273
  store i64 %conv, i64* %arrayidx, align 16, !dbg !273
  %call1 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel01, i8* noundef null) #5, !dbg !275
  %conv2 = sext i32 %call1 to i64, !dbg !275
  %arrayidx3 = getelementptr inbounds i64, i64* %vla, i64 1, !dbg !275
  store i64 %conv2, i64* %arrayidx3, align 8, !dbg !275
  %call5 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel10, i8* noundef null) #5, !dbg !277
  %conv6 = sext i32 %call5 to i64, !dbg !277
  %arrayidx7 = getelementptr inbounds i64, i64* %vla, i64 2, !dbg !277
  store i64 %conv6, i64* %arrayidx7, align 16, !dbg !277
  %call9 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel11, i8* noundef null) #5, !dbg !279
  %conv10 = sext i32 %call9 to i64, !dbg !279
  %arrayidx11 = getelementptr inbounds i64, i64* %vla, i64 3, !dbg !279
  store i64 %conv10, i64* %arrayidx11, align 8, !dbg !279
  %call13 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel20, i8* noundef null) #5, !dbg !281
  %conv14 = sext i32 %call13 to i64, !dbg !281
  %arrayidx15 = getelementptr inbounds i64, i64* %vla, i64 4, !dbg !281
  store i64 %conv14, i64* %arrayidx15, align 16, !dbg !281
  %call17 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel21, i8* noundef null) #5, !dbg !283
  %conv18 = sext i32 %call17 to i64, !dbg !283
  %arrayidx19 = getelementptr inbounds i64, i64* %vla, i64 5, !dbg !283
  store i64 %conv18, i64* %arrayidx19, align 8, !dbg !283
  %call21 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel30, i8* noundef null) #5, !dbg !285
  %conv22 = sext i32 %call21 to i64, !dbg !285
  %arrayidx23 = getelementptr inbounds i64, i64* %vla, i64 6, !dbg !285
  store i64 %conv22, i64* %arrayidx23, align 16, !dbg !285
  %call25 = call i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef null, i8* (i8*)* noundef @kernel31, i8* noundef null) #5, !dbg !287
  %conv26 = sext i32 %call25 to i64, !dbg !287
  %arrayidx27 = getelementptr inbounds i64, i64* %vla, i64 7, !dbg !287
  store i64 %conv26, i64* %arrayidx27, align 8, !dbg !287
  ret i32 0, !dbg !289
}

; Function Attrs: nofree nosync nounwind willreturn
declare i8* @llvm.stacksave() #3

; Function Attrs: nounwind
declare i32 @__VERIFIER_thread_create(%struct.__VERIFIER_attr_t* noundef, i8* (i8*)* noundef, i8* noundef) #4

; Function Attrs: nofree nosync nounwind willreturn
declare void @llvm.stackrestore(i8*) #3

; Function Attrs: nounwind
declare void @__VERIFIER_assume(i32) #5

; Function Attrs: nounwind
declare void @__VERIFIER_kill_thread(i1) #5

; Function Attrs: nounwind
declare i1 @__VERIFIER_opt_begin() #5

; Function Attrs: nounwind
declare void @__VERIFIER_loop_begin() #5

; Function Attrs: nounwind
declare void @__VERIFIER_spin_start() #5

; Function Attrs: nounwind
declare void @__VERIFIER_spin_end(i1) #5

; Function Attrs: nounwind
declare void @__VERIFIER_faiZNE_spin_end() #5

; Function Attrs: nounwind
declare void @__VERIFIER_lockZNE_spin_end() #5

; Function Attrs: nounwind
declare void @__VERIFIER_memory_scope_work_group() #5

; Function Attrs: nounwind
declare void @__VERIFIER_thread_global_id() #5

; Function Attrs: nounwind
declare void @__VERIFIER_thread_local_id() #5

; Function Attrs: nounwind
declare void @__VERIFIER_thread_group_id() #5

; Function Attrs: nounwind
declare void @__VERIFIER_thread_kernel_id() #5

; Function Attrs: nounwind
declare void @__VERIFIER_syncthread() #5

; Function Attrs: nounwind
declare void @__VERIFIER_groupsize() #5

; Function Attrs: nounwind
declare void @__VERIFIER_weak_access() #5

; Function Attrs: nounwind
declare void @__VERIFIER_ret_CAS() #5

; Function Attrs: argmemonly nofree nosync nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #6

; Function Attrs: argmemonly nofree nosync nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg, i8* nocapture) #6

attributes #0 = { noinline nounwind uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nofree nosync nounwind readnone speculatable willreturn }
attributes #2 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nofree nosync nounwind willreturn }
attributes #4 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { nounwind }
attributes #6 = { argmemonly nofree nosync nounwind willreturn }

!llvm.dbg.cu = !{!2}
!llvm.module.flags = !{!82, !83, !84, !85, !86, !87, !88}
!llvm.ident = !{!89}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "l", scope: !2, file: !3, line: 61, type: !80, isLocal: false, isDefinition: true)
!2 = distinct !DICompileUnit(language: DW_LANG_C99, file: !3, producer: "Ubuntu clang version 14.0.0-1ubuntu1.1", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !4, retainedTypes: !15, globals: !17, splitDebugInlining: false, nameTableKind: None)
!3 = !DIFile(filename: "tr-caslock.c", directory: "/home/lab/Downloads/tools/gpuMem-race-detection/input/dat3m/opencl", checksumkind: CSK_MD5, checksum: "3b4122db381e89e91b52d61953ebc65d")
!4 = !{!5}
!5 = !DICompositeType(tag: DW_TAG_enumeration_type, name: "memory_order", file: !6, line: 61, baseType: !7, size: 32, elements: !8)
!6 = !DIFile(filename: "include/stdatomic.h", directory: "/home/lab/Downloads/tools/gpuMem-race-detection", checksumkind: CSK_MD5, checksum: "e0b50d9064c5b4d5d741a8c16fbfd08e")
!7 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!8 = !{!9, !10, !11, !12, !13, !14}
!9 = !DIEnumerator(name: "memory_order_relaxed", value: 0)
!10 = !DIEnumerator(name: "memory_order_consume", value: 1)
!11 = !DIEnumerator(name: "memory_order_acquire", value: 2)
!12 = !DIEnumerator(name: "memory_order_release", value: 3)
!13 = !DIEnumerator(name: "memory_order_acq_rel", value: 4)
!14 = !DIEnumerator(name: "memory_order_seq_cst", value: 5)
!15 = !{!16}
!16 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64)
!17 = !{!0, !18, !21, !26, !44, !55, !58, !63, !65, !67, !75}
!18 = !DIGlobalVariableExpression(var: !19, expr: !DIExpression())
!19 = distinct !DIGlobalVariable(name: "x", scope: !2, file: !3, line: 62, type: !20, isLocal: false, isDefinition: true)
!20 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!21 = !DIGlobalVariableExpression(var: !22, expr: !DIExpression())
!22 = distinct !DIGlobalVariable(name: "A", scope: !2, file: !3, line: 63, type: !23, isLocal: false, isDefinition: true)
!23 = !DICompositeType(tag: DW_TAG_array_type, baseType: !20, size: 512, elements: !24)
!24 = !{!25}
!25 = !DISubrange(count: 16)
!26 = !DIGlobalVariableExpression(var: !27, expr: !DIExpression())
!27 = distinct !DIGlobalVariable(name: "__genmc_dir_inode", scope: !2, file: !28, line: 61, type: !29, isLocal: false, isDefinition: true)
!28 = !DIFile(filename: "include/genmc_internal.h", directory: "/home/lab/Downloads/tools/gpuMem-race-detection", checksumkind: CSK_MD5, checksum: "a7523a76bd0c424a519d1324fcdcc39c")
!29 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "__VERIFIER_inode", file: !28, line: 38, size: 640, elements: !30)
!30 = !{!31, !36, !37, !38, !39}
!31 = !DIDerivedType(tag: DW_TAG_member, name: "lock", scope: !29, file: !28, line: 40, baseType: !32, size: 32)
!32 = !DIDerivedType(tag: DW_TAG_typedef, name: "__VERIFIER_mutex_t", file: !28, line: 23, baseType: !33)
!33 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !28, line: 23, size: 32, elements: !34)
!34 = !{!35}
!35 = !DIDerivedType(tag: DW_TAG_member, name: "__private", scope: !33, file: !28, line: 23, baseType: !20, size: 32)
!36 = !DIDerivedType(tag: DW_TAG_member, name: "i_size", scope: !29, file: !28, line: 41, baseType: !20, size: 32, offset: 32)
!37 = !DIDerivedType(tag: DW_TAG_member, name: "i_transaction", scope: !29, file: !28, line: 44, baseType: !20, size: 32, offset: 64)
!38 = !DIDerivedType(tag: DW_TAG_member, name: "i_disksize", scope: !29, file: !28, line: 49, baseType: !20, size: 32, offset: 96)
!39 = !DIDerivedType(tag: DW_TAG_member, name: "data", scope: !29, file: !28, line: 50, baseType: !40, size: 512, offset: 128)
!40 = !DICompositeType(tag: DW_TAG_array_type, baseType: !41, size: 512, elements: !42)
!41 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!42 = !{!43}
!43 = !DISubrange(count: 64)
!44 = !DIGlobalVariableExpression(var: !45, expr: !DIExpression())
!45 = distinct !DIGlobalVariable(name: "__genmc_dummy_file", scope: !2, file: !28, line: 62, type: !46, isLocal: false, isDefinition: true)
!46 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "__VERIFIER_file", file: !28, line: 53, size: 192, elements: !47)
!47 = !{!48, !51, !52, !53, !54}
!48 = !DIDerivedType(tag: DW_TAG_member, name: "inode", scope: !46, file: !28, line: 54, baseType: !49, size: 64)
!49 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !50, size: 64)
!50 = !DICompositeType(tag: DW_TAG_structure_type, name: "inode", file: !28, line: 54, flags: DIFlagFwdDecl)
!51 = !DIDerivedType(tag: DW_TAG_member, name: "count", scope: !46, file: !28, line: 55, baseType: !7, size: 32, offset: 64)
!52 = !DIDerivedType(tag: DW_TAG_member, name: "flags", scope: !46, file: !28, line: 56, baseType: !7, size: 32, offset: 96)
!53 = !DIDerivedType(tag: DW_TAG_member, name: "pos_lock", scope: !46, file: !28, line: 57, baseType: !32, size: 32, offset: 128)
!54 = !DIDerivedType(tag: DW_TAG_member, name: "pos", scope: !46, file: !28, line: 58, baseType: !20, size: 32, offset: 160)
!55 = !DIGlobalVariableExpression(var: !56, expr: !DIExpression())
!56 = distinct !DIGlobalVariable(name: "errno", scope: !2, file: !57, line: 126, type: !20, isLocal: false, isDefinition: true)
!57 = !DIFile(filename: "include/errno.h", directory: "/home/lab/Downloads/tools/gpuMem-race-detection", checksumkind: CSK_MD5, checksum: "91e118040a3ab163aa96d3c3451866a3")
!58 = !DIGlobalVariableExpression(var: !59, expr: !DIExpression())
!59 = distinct !DIGlobalVariable(name: "stdin", scope: !2, file: !60, line: 15, type: !61, isLocal: false, isDefinition: true)
!60 = !DIFile(filename: "include/stdio.h", directory: "/home/lab/Downloads/tools/gpuMem-race-detection", checksumkind: CSK_MD5, checksum: "0edd8f8afe87cbce24b4902f9dfb5d68")
!61 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !62, size: 64)
!62 = !DICompositeType(tag: DW_TAG_structure_type, name: "_IO_FILE", file: !60, line: 12, flags: DIFlagFwdDecl)
!63 = !DIGlobalVariableExpression(var: !64, expr: !DIExpression())
!64 = distinct !DIGlobalVariable(name: "stdout", scope: !2, file: !60, line: 16, type: !61, isLocal: false, isDefinition: true)
!65 = !DIGlobalVariableExpression(var: !66, expr: !DIExpression())
!66 = distinct !DIGlobalVariable(name: "stderr", scope: !2, file: !60, line: 17, type: !61, isLocal: false, isDefinition: true)
!67 = !DIGlobalVariableExpression(var: !68, expr: !DIExpression())
!68 = distinct !DIGlobalVariable(name: "bard", scope: !2, file: !3, line: 41, type: !69, isLocal: false, isDefinition: true)
!69 = !DIDerivedType(tag: DW_TAG_typedef, name: "pthread_barrier_t", file: !70, line: 33, baseType: !71)
!70 = !DIFile(filename: "include/pthread.h", directory: "/home/lab/Downloads/tools/gpuMem-race-detection", checksumkind: CSK_MD5, checksum: "abcaa9781d7384cead920ebd1c959602")
!71 = !DIDerivedType(tag: DW_TAG_typedef, name: "__VERIFIER_barrier_t", file: !28, line: 20, baseType: !72)
!72 = distinct !DICompositeType(tag: DW_TAG_structure_type, file: !28, line: 20, size: 32, elements: !73)
!73 = !{!74}
!74 = !DIDerivedType(tag: DW_TAG_member, name: "__private", scope: !72, file: !28, line: 20, baseType: !20, size: 32)
!75 = !DIGlobalVariableExpression(var: !76, expr: !DIExpression())
!76 = distinct !DIGlobalVariable(name: "barg", scope: !2, file: !3, line: 42, type: !77, isLocal: false, isDefinition: true)
!77 = !DICompositeType(tag: DW_TAG_array_type, baseType: !69, size: 160, elements: !78)
!78 = !{!79}
!79 = !DISubrange(count: 5)
!80 = !DIDerivedType(tag: DW_TAG_typedef, name: "atomic_int", file: !6, line: 97, baseType: !81)
!81 = !DIDerivedType(tag: DW_TAG_atomic_type, baseType: !20)
!82 = !{i32 7, !"Dwarf Version", i32 5}
!83 = !{i32 2, !"Debug Info Version", i32 3}
!84 = !{i32 1, !"wchar_size", i32 4}
!85 = !{i32 7, !"PIC Level", i32 2}
!86 = !{i32 7, !"PIE Level", i32 2}
!87 = !{i32 7, !"uwtable", i32 1}
!88 = !{i32 7, !"frame-pointer", i32 2}
!89 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!90 = distinct !DISubprogram(name: "mutex_test", scope: !3, file: !3, line: 86, type: !91, scopeLine: 86, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!91 = !DISubroutineType(types: !92)
!92 = !{null, !20, !20, !20, !20}
!93 = !{}
!94 = !DILocation(line: 93, column: 7, scope: !90)
!95 = !DILocation(line: 95, column: 6, scope: !90)
!96 = !DILocation(line: 95, column: 13, scope: !90)
!97 = !DILocation(line: 95, column: 82, scope: !90)
!98 = distinct !{!98, !95, !99, !100}
!99 = !DILocation(line: 97, column: 5, scope: !90)
!100 = !{!"llvm.loop.mustprogress"}
!101 = !DILocation(line: 98, column: 5, scope: !90)
!102 = !DILocation(line: 99, column: 9, scope: !90)
!103 = !DILocation(line: 100, column: 5, scope: !90)
!104 = !DILocation(line: 101, column: 11, scope: !90)
!105 = !DILocation(line: 101, column: 7, scope: !90)
!106 = !DILocation(line: 106, column: 7, scope: !90)
!107 = !DILocation(line: 108, column: 5, scope: !90)
!108 = !DILocation(line: 109, column: 5, scope: !90)
!109 = !DILocation(line: 110, column: 5, scope: !90)
!110 = !DILocation(line: 110, column: 18, scope: !90)
!111 = !DILocation(line: 111, column: 1, scope: !90)
!112 = distinct !DISubprogram(name: "kernel00", scope: !3, file: !3, line: 113, type: !113, scopeLine: 113, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!113 = !DISubroutineType(types: !114)
!114 = !{!16, !16}
!115 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !116)
!116 = distinct !DILocation(line: 114, column: 5, scope: !112)
!117 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !116)
!118 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !116)
!119 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !116)
!120 = distinct !{!120, !117, !121, !100}
!121 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !116)
!122 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !116)
!123 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !116)
!124 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !116)
!125 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !116)
!126 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !116)
!127 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !116)
!128 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !116)
!129 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !116)
!130 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !116)
!131 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !116)
!132 = !DILocation(line: 115, column: 5, scope: !112)
!133 = distinct !DISubprogram(name: "kernel01", scope: !3, file: !3, line: 118, type: !113, scopeLine: 118, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!134 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !135)
!135 = distinct !DILocation(line: 119, column: 5, scope: !133)
!136 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !135)
!137 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !135)
!138 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !135)
!139 = distinct !{!139, !136, !140, !100}
!140 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !135)
!141 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !135)
!142 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !135)
!143 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !135)
!144 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !135)
!145 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !135)
!146 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !135)
!147 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !135)
!148 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !135)
!149 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !135)
!150 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !135)
!151 = !DILocation(line: 120, column: 5, scope: !133)
!152 = distinct !DISubprogram(name: "kernel10", scope: !3, file: !3, line: 123, type: !113, scopeLine: 123, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!153 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !154)
!154 = distinct !DILocation(line: 124, column: 5, scope: !152)
!155 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !154)
!156 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !154)
!157 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !154)
!158 = distinct !{!158, !155, !159, !100}
!159 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !154)
!160 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !154)
!161 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !154)
!162 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !154)
!163 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !154)
!164 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !154)
!165 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !154)
!166 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !154)
!167 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !154)
!168 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !154)
!169 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !154)
!170 = !DILocation(line: 125, column: 5, scope: !152)
!171 = distinct !DISubprogram(name: "kernel11", scope: !3, file: !3, line: 128, type: !113, scopeLine: 128, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!172 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !173)
!173 = distinct !DILocation(line: 129, column: 5, scope: !171)
!174 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !173)
!175 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !173)
!176 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !173)
!177 = distinct !{!177, !174, !178, !100}
!178 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !173)
!179 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !173)
!180 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !173)
!181 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !173)
!182 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !173)
!183 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !173)
!184 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !173)
!185 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !173)
!186 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !173)
!187 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !173)
!188 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !173)
!189 = !DILocation(line: 130, column: 5, scope: !171)
!190 = distinct !DISubprogram(name: "kernel20", scope: !3, file: !3, line: 132, type: !113, scopeLine: 132, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!191 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !192)
!192 = distinct !DILocation(line: 133, column: 5, scope: !190)
!193 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !192)
!194 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !192)
!195 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !192)
!196 = distinct !{!196, !193, !197, !100}
!197 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !192)
!198 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !192)
!199 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !192)
!200 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !192)
!201 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !192)
!202 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !192)
!203 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !192)
!204 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !192)
!205 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !192)
!206 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !192)
!207 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !192)
!208 = !DILocation(line: 134, column: 5, scope: !190)
!209 = distinct !DISubprogram(name: "kernel21", scope: !3, file: !3, line: 137, type: !113, scopeLine: 137, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!210 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !211)
!211 = distinct !DILocation(line: 138, column: 5, scope: !209)
!212 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !211)
!213 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !211)
!214 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !211)
!215 = distinct !{!215, !212, !216, !100}
!216 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !211)
!217 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !211)
!218 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !211)
!219 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !211)
!220 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !211)
!221 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !211)
!222 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !211)
!223 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !211)
!224 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !211)
!225 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !211)
!226 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !211)
!227 = !DILocation(line: 139, column: 5, scope: !209)
!228 = distinct !DISubprogram(name: "kernel30", scope: !3, file: !3, line: 142, type: !113, scopeLine: 142, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!229 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !230)
!230 = distinct !DILocation(line: 143, column: 5, scope: !228)
!231 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !230)
!232 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !230)
!233 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !230)
!234 = distinct !{!234, !231, !235, !100}
!235 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !230)
!236 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !230)
!237 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !230)
!238 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !230)
!239 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !230)
!240 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !230)
!241 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !230)
!242 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !230)
!243 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !230)
!244 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !230)
!245 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !230)
!246 = !DILocation(line: 144, column: 5, scope: !228)
!247 = distinct !DISubprogram(name: "kernel31", scope: !3, file: !3, line: 147, type: !113, scopeLine: 147, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!248 = !DILocation(line: 93, column: 7, scope: !90, inlinedAt: !249)
!249 = distinct !DILocation(line: 148, column: 5, scope: !247)
!250 = !DILocation(line: 95, column: 6, scope: !90, inlinedAt: !249)
!251 = !DILocation(line: 95, column: 13, scope: !90, inlinedAt: !249)
!252 = !DILocation(line: 95, column: 82, scope: !90, inlinedAt: !249)
!253 = distinct !{!253, !250, !254, !100}
!254 = !DILocation(line: 97, column: 5, scope: !90, inlinedAt: !249)
!255 = !DILocation(line: 98, column: 5, scope: !90, inlinedAt: !249)
!256 = !DILocation(line: 99, column: 9, scope: !90, inlinedAt: !249)
!257 = !DILocation(line: 100, column: 5, scope: !90, inlinedAt: !249)
!258 = !DILocation(line: 101, column: 11, scope: !90, inlinedAt: !249)
!259 = !DILocation(line: 101, column: 7, scope: !90, inlinedAt: !249)
!260 = !DILocation(line: 106, column: 7, scope: !90, inlinedAt: !249)
!261 = !DILocation(line: 108, column: 5, scope: !90, inlinedAt: !249)
!262 = !DILocation(line: 109, column: 5, scope: !90, inlinedAt: !249)
!263 = !DILocation(line: 110, column: 5, scope: !90, inlinedAt: !249)
!264 = !DILocation(line: 110, column: 18, scope: !90, inlinedAt: !249)
!265 = !DILocation(line: 149, column: 5, scope: !247)
!266 = distinct !DISubprogram(name: "main", scope: !3, file: !3, line: 151, type: !267, scopeLine: 151, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !93)
!267 = !DISubroutineType(types: !268)
!268 = !{!20, !20, !269}
!269 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !270, size: 64)
!270 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !41, size: 64)
!271 = !DILocation(line: 156, column: 32, scope: !266)
!272 = !DILocation(line: 158, column: 5, scope: !266)
!273 = !DILocation(line: 160, column: 5, scope: !274)
!274 = distinct !DILexicalBlock(scope: !266, file: !3, line: 160, column: 5)
!275 = !DILocation(line: 161, column: 5, scope: !276)
!276 = distinct !DILexicalBlock(scope: !266, file: !3, line: 161, column: 5)
!277 = !DILocation(line: 162, column: 5, scope: !278)
!278 = distinct !DILexicalBlock(scope: !266, file: !3, line: 162, column: 5)
!279 = !DILocation(line: 163, column: 5, scope: !280)
!280 = distinct !DILexicalBlock(scope: !266, file: !3, line: 163, column: 5)
!281 = !DILocation(line: 164, column: 5, scope: !282)
!282 = distinct !DILexicalBlock(scope: !266, file: !3, line: 164, column: 5)
!283 = !DILocation(line: 165, column: 5, scope: !284)
!284 = distinct !DILexicalBlock(scope: !266, file: !3, line: 165, column: 5)
!285 = !DILocation(line: 166, column: 5, scope: !286)
!286 = distinct !DILexicalBlock(scope: !266, file: !3, line: 166, column: 5)
!287 = !DILocation(line: 167, column: 5, scope: !288)
!288 = distinct !DILexicalBlock(scope: !266, file: !3, line: 167, column: 5)
!289 = !DILocation(line: 175, column: 1, scope: !266)
