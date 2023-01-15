<<<<<<< HEAD
import sys
n,t=map(int, sys.stdin.readline().split())
li=[i for i in range(1,n+1)]

ans=[]
num=0

for i in range(n):
    num+=t-1
    if num>=len(li):
        num=num%len(li)
    ans.append(str(li.pop(num)))

=======
import sys
n,t=map(int, sys.stdin.readline().split())
li=[i for i in range(1,n+1)]

ans=[]
num=0

for i in range(n):
    num+=t-1
    if num>=len(li):
        num=num%len(li)
    ans.append(str(li.pop(num)))

>>>>>>> 8631af4151e4591947ce5e346bac361d7f14660d
print("<"+", ".join(ans)[:]+">")