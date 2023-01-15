import sys
a,b=map(int, sys.stdin.readline().split())

if (a==0 and b<45):
    a = 23
    b = (60+b)-45
elif (a!=0 and b<45):
    a=a-1
    b = (60+b)-45
else:
    b=b-45
print(a,b)
