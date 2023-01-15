import sys
x,y,w,h=map(int, sys.stdin.readline().split())
n=abs(x-w)
m=abs(y-h)
print(min(x,y,w,h,n,m))
