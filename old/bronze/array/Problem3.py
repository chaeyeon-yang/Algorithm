import sys
a=int(sys.stdin.readline())
b=int(sys.stdin.readline())
c=int(sys.stdin.readline())
result = str(a*b*c)
print(result.count('0'))
for i in range(1,10):
    print(result.count(str(i)))
