from tabulate import tabulate

files=[
"gcol_kernel-4-2.out",
"gcol_kernel-5-2.out",
"gcol_kernel-7-2.out",
"gcol_kernel-10-2.out",
"gcol_kernel-15-2.out",
"mm_kernel-4-3.out",
"mm_kernel-5-3.out",
"mm_kernel-7-3.out",
"mm_kernel-10-3.out",
"mm_kernel-15-3.out"
]
n = 1
rowmem =[]
rowtime = []
rowexec = []
rowegraph = []
with open('gcol_mmmem.dat','w') as outfile:
      for i in range(0,10):
            with open(f'{files[i]}','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Maximum resident set size (kbytes):' in line:
                              value = int(line.split(":")[1].strip())
                              value = value / 1000
                              outfile.write(f'{n} {value}\n')
                              rowmem.append([n,value])
                              n = n+1
                              break
#time
n = 1
with open('gcol_mmtime.dat','w') as outfile:
      for i in range(0,10):
            with open(f'{files[i]}','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Total wall-clock time:' in line:
                              value = line.split(':')[1].split()[0]
                              value = value.replace('s', '')
                              outfile.write(f'{n} {value}\n')
                              rowtime.append([n,value])
                              n = n+1
                              break

#executions
n = 1
with open('gcol_mmexec.dat','w') as outfile:
      for i in range(0,10):
            with open(f'{files[i]}','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Number of complete executions explored:' in line:
                              value = int(line.split(":")[1].strip())
                              outfile.write(f'{n} {value}\n')
                              rowexec.append([n,value])
                              n = n+1
                              break

#egraph
n = 1
with open('gcol_mmesize.dat','w') as outfile:
      for i in range(0,10):
            with open(f'{files[i]}','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Max EGraph Size:' in line:
                              value = int(line.split(":")[1].strip())
                              outfile.write(f'{n} {value}\n')
                              rowegraph.append([n,value])
                              n = n+1
                              break

table = []
table.append(["Program","Mem","Time","Exec","Egraph"])
for i in range(len(rowmem)):
      table.append([files[i].split(".")[0] , rowmem[i][1] , rowtime[i][1] , rowexec[i][1], rowegraph[i][1]])
print(tabulate(table, headers='firstrow', tablefmt='pipe'))
