from tabulate import tabulate

n=2
rowmem =[]
rowtime = []
rowexec = []
rowegraph = [26, 36, 46, 56, 66, 76, 86, 96, 106, 116, 126, 136, 146, 156, 166, 176, 186, 196, 206, 216, 226]
with open('LB_mem.dat','w') as outfile:
      for i in range(2,23):
            with open(f'res{i}.out','r') as infile:
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
n=2
with open('LB_time.dat','w') as outfile:
      for i in range(2,23):
            with open(f'res{i}.out','r') as infile:
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
n=2
with open('LB_exec.dat','w') as outfile:
      for i in range(2,23):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Number of complete executions explored:' in line:
                              value = int(line.split(":")[1].strip())
                              outfile.write(f'{n} {value}\n')
                              rowexec.append([n,value])
                              n = n+1
                              break

# # egraph
# n=2
# with open('LB_esize.dat','w') as outfile:
#       for i in range(2,23):
#             with open(f'res{i}.out','r') as infile:
#                   lines = infile.readlines()
#                   for line in lines:
#                         if 'Max EGraph Size:' in line:
#                               value = int(line.split(":")[1].strip())
#                               outfile.write(f'{n} {value}\n')
#                               rowegraph.append([n,value])
#                               n = n+1
#                               break

table = []
table.append(["Program","Mem","Time","Exec","EventPerExec"])
for i in range(len(rowmem)):
      table.append([rowmem[i][0] , rowmem[i][1] , rowtime[i][1] , rowexec[i][1],rowegraph[i]])
print(tabulate(table, headers='firstrow', tablefmt='pipe'))
