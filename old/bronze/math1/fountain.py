import sys
n=int(sys.stdin.readline())
nums=[]

num=cnt=0
while cnt<n:
    num+=1
    cnt+=num
cnt-=num

if num%2==0:
    x=n-cnt
    y=num-x+1
else:
    x=num-(n-cnt)+1
    y=n-cnt

print(f"{x}/{y}")
