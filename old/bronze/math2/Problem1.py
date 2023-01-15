import sys
case=int(sys.stdin.readline())
nums=list(map(int, sys.stdin.readline().split()))
cnt=0
for i in nums:
    sosu=True
    if(i!=1):
        for j in range(2, i):
            if(i%j==0):
                sosu=False
        if(sosu):
            cnt+=1
        
print(cnt)
