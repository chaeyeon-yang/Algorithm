import sys
def push(x):
    s.append(x)
def pop():
    if(empty()):print(-1)
    else:
        res=s[-1]
        del s[-1]
        print(res)
def size():
    print(len(s))
def empty():
    if(len(s)==0): return 1
    else: return 0
def top():
    if(empty()): print(-1)
    else: print(s[-1])

s=[]
cnt=int(sys.stdin.readline())
for i in range(cnt):
    ans=sys.stdin.readline().split()
    if(ans[0]=='push'):
        push(ans[1])
    elif(ans[0]=='pop'):
        pop()
    elif(ans[0]=='size'):
        size()
    elif(ans[0]=='empty'):
        print(empty())
    elif(ans[0]=='top'):
        top()
