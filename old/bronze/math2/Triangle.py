import sys
while True:
    li=list(map(int, sys.stdin.readline().split()))
    if li[0]==0: break
    else:
        li.sort()
        if(li[2]**2==li[0]**2+li[1]**2):
            print("right")
        else:
            print("wrong")
    
    
