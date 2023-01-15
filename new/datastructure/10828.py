import sys

n=int(sys.stdin.readline())
s=[]
for i in range(n):
  m=sys.stdin.readline().split()
  if m[0]=='push':
    s.append(m[1])
  elif m[0]=='top':
    print(s[-1] if s else -1)
  elif m[0]=='pop':
    print(s.pop() if s else -1)
  elif m[0]=='size':
    print(len(s))
  elif m[0]=='empty':
    print(0 if s else 1)