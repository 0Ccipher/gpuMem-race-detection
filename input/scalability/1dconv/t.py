import os

for i in range(1, 31):
    file_name = f"1dconv_kernel-{i}.c"
    
    with open(file_name, 'r') as file:
        lines = file.readlines()
    
    new_lines = []
    for line in lines:
        if line.strip() == '#define NBLOCKS 30':
            new_line = f"#define NBLOCKS {i}\n"
        elif line.strip() == '#define GROUPS ((WORK_ITEMS_PER_KERNEL / WORK_ITEMS_PER_GROUP)+1)':
            new_line = f"#define GROUPS NBLOCKS\n"
        else:
            new_line = line
        new_lines.append(new_line)
    
    # Write the modified lines back to the file
    with open(file_name, 'w') as file:
        file.writelines(new_lines)

print("Lines replaced successfully.")
