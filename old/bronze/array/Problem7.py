import sys
n=int(sys.stdin.readline())
for i in range(n):
    cnt=0
    case=list(map(int, sys.stdin.readline().split()))
    avg=sum(case[1:])/case[0]
    for a in case[1:]:
        if(a>avg):
            cnt+=1
    res=cnt/case[0]*100
    print(f'{res:.3f}%')
    
    



