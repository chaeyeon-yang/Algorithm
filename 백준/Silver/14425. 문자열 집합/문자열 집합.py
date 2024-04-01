import sys
input = sys.stdin.readline

n, m = map(int, input().split())
s = [input() for _ in range(n)]
li = [input() for _ in range(m)]
cnt = 0

for i in li:
  for j in s:
    if i == j:
      cnt += 1
      break

print(cnt)