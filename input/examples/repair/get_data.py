from tabulate import tabulate

files=[
"GCON",
"GCOL",
"matmul",
"1dconv"
]
n = 1
rowmem =[]
rowtime = []
rowexec = []
rowegraph = []
# with open('repair.dat','w') as outfile:
#       for i in range(0,5):
#             with open(f'{files[i]}','r') as infile:
#                   lines = infile.readlines()
#                   for line in lines:
#                         if 'Maximum resident set size (kbytes):' in line:
#                               value = int(line.split(":")[1].strip())
#                               value = value / 1000
#                               outfile.write(f'{n} {value}\n')
#                               rowmem.append([n,value])
#                               n = n+1
#                               break
# #time
# n = 1
# with open('gcol_mmtime.dat','w') as outfile:
#       for i in range(0,5):
#             with open(f'{files[i]}','r') as infile:
#                   lines = infile.readlines()
#                   for line in lines:
#                         if 'Total wall-clock time:' in line:
#                               value = line.split(':')[1].split()[0]
#                               value = value.replace('s', '')
#                               outfile.write(f'{n} {value}\n')
#                               rowtime.append([n,value])
#                               n = n+1
#                               break

#executions
n = 1
with open('gcol_mmexec.dat','w') as outfile:
      for i in range(1,5):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Explored Complete Executions:' in line:
                              value = int(line.split(":")[1].strip())
                              outfile.write(f'{n} {value}\n')
                              rowexec.append([n,value])
                              n = n+1
                              break

#egraph
n = 1
with open('gcol_mmesize.dat','w') as outfile:
      for i in range(1,5):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'EGraph Size:' in line:
                              value = int(line.split(":")[1].strip())
                              outfile.write(f'{n} {value}\n')
                              rowegraph.append([n,value])
                              n = n+1
                              break

table = []
table.append(["Program","Exec","Egraph"])
for i in range(len(rowexec)):
      table.append([files[i] ,rowexec[i][1], rowegraph[i][1]])
print(tabulate(table, headers='firstrow', tablefmt='pipe'))
