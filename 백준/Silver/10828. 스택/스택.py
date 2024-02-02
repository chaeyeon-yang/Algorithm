import sys
n=int(sys.stdin.readline())
s=[]
for _ in range(n):
    m=sys.stdin.readline().split()
    if m[0]=='push':
      s.append(m[1])
    elif m[0]=='top':
        print(-1 if len(s)==0 else s[-1])
    elif m[0]=='size':
        print(len(s))
    elif m[0]=='empty':
        print(1 if len(s)==0 else 0)
    elif m[0]=='pop':
        if len(s)==0: 
            print(-1)
        else:
            print(s.pop())   
            
