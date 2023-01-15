import sys
cnt=int(sys.stdin.readline())
s=[]
for i in range(cnt):
    ans=int(sys.stdin.readline())
    if(ans==0):
        s.pop()
    else: s.append(ans)
print(sum(s))
