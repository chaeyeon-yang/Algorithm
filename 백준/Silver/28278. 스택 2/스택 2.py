import sys
input = sys.stdin.readline

n = int(input())
s = []

for _ in range(n):
  tmp = list(map(int, input().split()))
  if tmp[0] == 1:
    s.append(tmp[1])
  if tmp[0] == 2:
    if (len(s)):
      print(s.pop())
    else:
      print(-1)
  if tmp[0] == 3:
    print(len(s))
  if tmp[0] == 4:
    if len(s):
      print(0)
    else: print(1)
  if tmp[0] == 5:
    if len(s):
      print(s[-1])
    else:
      print(-1)
