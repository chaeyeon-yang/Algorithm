import sys
n=int(sys.stdin.readline())

for _ in range(n):
  m=sys.stdin.readline()
  s=[]
  isVPS=True
  for i in m:
    if i=='(':
      s.append(i)
    elif i==')':
      if s:
        s.pop()
      else:
        isVPS=False
        break

  if s: 
    isVPS=False

  print('YES' if isVPS else 'NO')