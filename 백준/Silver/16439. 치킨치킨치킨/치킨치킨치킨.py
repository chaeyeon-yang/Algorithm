import sys
from itertools import combinations
input = sys.stdin.readline

n, m = map(int, input().split())
like = [list(map(int, input().split())) for _ in range(n)]

res = 0

for a, b, c in combinations(range(m), 3):
  tmp = 0
  for i in range(n):
    tmp += max(like[i][a], like[i][b], like[i][c])
  res = max(tmp, res)
print(res)
