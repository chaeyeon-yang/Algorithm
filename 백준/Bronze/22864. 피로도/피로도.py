import sys
input = sys.stdin.readline

piro = 0
res = 0
a, b, c, m = map(int, input().split())
for i in range(1, 25):
  if (piro+a <= m):
    piro += a
    res += b
  else:
    piro -= c
    if piro < 0:
      piro = 0

print(res)