import sys
input = sys.stdin.readline

n=int(input())
li=list(map(int,input().split()))

start=0
index=[x for x in range(1,n+1)]
answer=[]
tmp = li.pop(start)
answer.append(index.pop(start))

while li:
    if tmp<0:
        start = (start+tmp)%len(li)
    else:
        start=(start+tmp-1)%len(li)
    tmp = li.pop(start)
    answer.append(index.pop(start))
for i in answer:
    print(i,end=' ')