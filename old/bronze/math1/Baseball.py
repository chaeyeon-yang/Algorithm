import sys
t=int(sys.stdin.readline())
for j in range(t):
    y=k=0
    for i in range(9):
        yn,kn=map(int, sys.stdin.readline().split())
        y+=yn
        k+=kn
    if(y>k):print("Yonsei")
    elif(y<k):print("Korea")
    else: print("Draw")
