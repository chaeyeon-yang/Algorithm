import sys
from collections import deque
input = sys.stdin.readline

n = int(input())

q = deque([])
for _ in range(n):
  tmp = list(map(int, input().split()))
  if tmp[0] == 1:
    q.appendleft(tmp[1])
  if tmp[0] == 2:
    q.append(tmp[1])
  if tmp[0] == 3:
    if len(q) == 0:
      print(-1)
    else:
      print(q.popleft())
  if tmp[0] == 4:
    if len(q) == 0:
      print(-1)
    else:
      print(q.pop())
  if tmp[0] == 5:
    print(len(q))
  if tmp[0] == 6:
    if (len(q)==0):
      print(1)
    else: print(0)
  if tmp[0] == 7:
    if (len(q)==0):
      print(-1)
    else:
      print(q[0])
  if tmp[0] == 8:
    if (len(q)):
      print(q[-1])
    else: print(-1)