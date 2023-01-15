import sys
n,m=sys.stdin.readline().split()
n=n[::-1]
m=m[::-1]
print(max(int(n), int(m)))
