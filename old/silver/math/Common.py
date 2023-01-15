# 유클리드 호제법 공부 후 성공..

import sys
n,m=map(int, sys.stdin.readline().split())
def gcd(a,b):
    if a<b:
        a,b=b,a
    if(a%b==0): return b
    else:
        while(a%b):
            res=a%b
            a=b
            b=res
    return res
print(gcd(n,m))
print(n*m//gcd(n,m))