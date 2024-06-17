import sys
input = sys.stdin.readline

n, m = map(int, input().split())
li = list(map(int, input().split()))
for _ in range(m):
  a, b, c = map(int, input().split())
  if a==1:
    li[b-1] = c
  elif a==2:
    for i in range(b-1, c):
      if li[i]:
        li[i] = 0
      else:
        li[i] = 1
  elif a==3:
    for i in range(b-1, c):
      li[i] = 0
  elif a==4:
    for i in range(b-1, c):
      li[i] = 1

for i in li:
  print(i, end=" ")