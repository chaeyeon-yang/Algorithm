import sys
input = sys.stdin.readline

N = int(input())
res = []

for i in range(0, N+1):
    cnt = 0
    tmp = str(i)
    for j in tmp:
        if j=='4' or j=='7':
            cnt += 1
    if (cnt==len(tmp)):
        res.append(i)

print(max(res))