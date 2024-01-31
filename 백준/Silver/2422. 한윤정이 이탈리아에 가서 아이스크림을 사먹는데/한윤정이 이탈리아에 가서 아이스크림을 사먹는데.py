import sys
input = sys.stdin.readline
from itertools import combinations

N, M = map(int, input().split())
ice = [[False for _ in range(N)] for i in range(N)]

for i in range(M):
    a, b = map(int, input().split())
    ice[a-1][b-1] = True
    ice[b-1][a-1] = True

res = 0

for i in combinations(range(N),3):
    if ice[i[0]][i[1]] or ice[i[0]][i[2]] or ice[i[1]][i[2]]:
        continue
    res += 1
print(res)