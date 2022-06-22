import sys
n=int(sys.stdin.readline())
k=True
for i in range(1, n+1):
  temp=str(i)
  for el in temp:
    i+=int(el)
  if i==n:
    k=False
    print(temp)
    break
if k:
  print(0)