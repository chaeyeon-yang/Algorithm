import sys
input = sys.stdin.readline

n, k = map(int, input().split())
cnt = 0
for a in range(n+1):
  if a < 10:
    a = '0'+str(a)
  if str(k) in str(a):
    cnt += 60*60
    continue
  for b in range(60):
    if b < 10:
      b = '0'+str(b)
    if str(k) in str(b):
      cnt += 60 
      continue
    for c in range(60):
      if c < 10:
        c = '0'+str(c)
      if str(k) in str(c):
        cnt += 1

print(cnt)