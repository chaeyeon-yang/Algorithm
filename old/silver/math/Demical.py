import sys
m=int(sys.stdin.readline())
n=int(sys.stdin.readline())

sosu=[]

for i in range(m,n+1):
    check=True
    if(i==1):pass
    else:
        for j in range(2,i):
            if(i%j==0):
                check=False
        if(check):
            sosu.append(i)

if len(sosu)==0:
    print(-1)
else:
    print(sum(sosu))
    print(min(sosu))