import sys
input = sys.stdin.readline
N = int(input())
p = list(map(int, input().split()))
p.sort()

res = []
tmp = 0
for i in p:
    tmp += i
    res.append(tmp)

print(sum(res))
