from tabulate import tabulate

n = 1
rowmem =[]
rowtime = []
rowexec = []
rowegraph = []
with open('gcon_1_mem.dat','w') as outfile:
      for i in range(1,31):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Maximum resident set size (kbytes):' in line:
                              value = int(line.split(":")[1].strip())
                              value = value / 1000
                              if i % 2== 1:
                                    outfile.write(f'{n} {value}\n')
                                    rowmem.append([n,value])
                                    n = n+1
                              break
#time
n = 1
with open('gcon_1_time.dat','w') as outfile:
      for i in range(1,31):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Total wall-clock time:' in line:
                              value = line.split(':')[1].split()[0]
                              value = value.replace('s', '')
                              if i % 2== 1:
                                    outfile.write(f'{n} {value}\n')
                                    rowtime.append([n,value])
                                    n=n+1
                              break

#executions
n = 1
with open('gcon_1_exec.dat','w') as outfile:
      for i in range(1,31):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Number of complete executions explored:' in line:
                              value = int(line.split(":")[1].strip())
                              if i % 2== 1:
                                    outfile.write(f'{n} {value}\n')
                                    rowexec.append([n,value])
                                    n=n+1
                              break

#egraph
n = 1
with open('gcon_1_esize','w') as outfile:
      for i in range(1,31):
            with open(f'res{i}.out','r') as infile:
                  lines = infile.readlines()
                  for line in lines:
                        if 'Max EGraph Size:' in line:
                              value = int(line.split(":")[1].strip())
                              if i % 2== 1:
                                    outfile.write(f'{n} {value}\n')
                                    rowegraph.append([n,value])
                                    n=n+1
                              break
table = []
table.append(["Program","Mem","Time","Exec","Egraph"])
for i in range(len(rowmem)):
      table.append([rowmem[i][0] , rowmem[i][1] , rowtime[i][1] , rowexec[i][1], rowegraph[i][1]])
print(tabulate(table, headers='firstrow', tablefmt='pipe'))
