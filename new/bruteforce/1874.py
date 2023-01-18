import sys
n=int(sys.stdin.readline())
s=[]
res=[]
temp=True
cnt=1
for j in range(n):
  num=int(sys.stdin.readline())
  while cnt<=num:
    s.append(cnt)
    res.append('+')
    cnt+=1
  if s[-1] == num:
    s.pop()
    res.append('-')
  else:
    temp=False
if temp==False:
  print('NO')
else:
  [print(i) for i in res]
  