import sys
input = sys.stdin.readline
N, X = map(int, input().split())

li = list(map(int, input().split()))
res=[]
for i in li:
  if i<X:
    res.append(i)

print(*res)