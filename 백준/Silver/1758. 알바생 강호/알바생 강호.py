import sys
input = sys.stdin.readline
N = int(input())

pay = [int(input()) for _ in range(N)]
pay.sort(reverse=True)
res = []

for i in range(N):
    tmp = pay[i]-i
    if (tmp<0):
        tmp=0
    res.append(tmp)

print(sum(res))