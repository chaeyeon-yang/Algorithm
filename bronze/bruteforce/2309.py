import sys
n=[]
for i in range(9):
  n.append(int(sys.stdin.readline()))

sum_n=sum(n)
one,two=0,0
for i in range(8):
  for j in range(i+1, 9):
    if sum_n-(n[i]+n[j])==100:
      one=n[i]
      two=n[j]

n.remove(one)
n.remove(two)
n.sort()
for i in n:
  print(i)