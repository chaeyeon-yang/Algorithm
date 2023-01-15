import sys
n,k=map(int, sys.stdin.readline().split())
q=[]
res=[]
for i in range(1,n+1):
  q.append(i)

for i in range(n):
  n+=k-1
  if n>=len(q):
    n=n%len(q)
  res.append(q.pop(n))
print("<",", ".join(str(i) for i in res),">",sep="")
