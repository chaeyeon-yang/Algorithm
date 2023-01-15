import sys
cnt=int(sys.stdin.readline())
for i in range(cnt):
    k=list(map(str, sys.stdin.readline().split()))
    re=int(k[0])
    n=0
    for i in range(len(k[1])):
        n=k[1][i]*re
        print(n,end="")
    print()
