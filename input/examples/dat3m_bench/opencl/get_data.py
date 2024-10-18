from tabulate import tabulate

files=[
"caslock-4-2.out",
"caslockAcqRx-4-2.out",
"caslockAcqRx-6-4.out",
"caslockRelRx-4-2.out",
"caslockRelRx-6-4.out",
"ticketlock-4-2.out",
"ticketlock-AcqRx-4-2.out",
"ticketlock-AcqRx-6-4.out",
"ticketlock-RelRx-4-2.out",
"ticketlock-RelRx-6-4.out",
"ttaslock-3-2.out",
"ttaslock-AcqRx-4-2.out",
"ttaslock-AcqRx-6-4.out",
"ttaslock-RelRx-4-2.out",
"ttaslock-RelRx-6-4.out",
"xf-barrier4-3.out",
"xf-barrierAcqRx-4-3.out",
"xf-barrierAcqRx-6-4.out",
"xf-barrierRelRx-4-3.out",
"xf-barrierRelRx-6-4.out"
]
n = 1
rowmem =[]
rowtime = []
rowexec = []
rowegraph = []
with open('table1_mem.dat','w') as outfile:
      for i in range(0,20):
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
with open('table1_time.dat','w') as outfile:
      for i in range(0,20):
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
with open('table1_exec.dat','w') as outfile:
      for i in range(0,20):
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
with open('table1_esize.dat','w') as outfile:
      for i in range(0,20):
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
