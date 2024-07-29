import os

# Loop through the 30 files
for i in range(1, 51):
    file_name = f"graph_connectivity-{i}.c"
    
    with open(file_name, 'r') as file:
        lines = file.readlines()
    
    new_lines = []
    for line in lines:
        if line.strip() == '#define NBLOCKS 1':
            new_line = f"#define NBLOCKS {i}\n"
        else:
            new_line = line
        new_lines.append(new_line)
    
    # Write the modified lines back to the file
    with open(file_name, 'w') as file:
        file.writelines(new_lines)

print("Lines replaced successfully.")
