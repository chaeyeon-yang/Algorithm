import sys
from collections import deque
n=int(sys.stdin.readline())
d=deque()
for _ in range(n):
  m=sys.stdin.readline().split()
  if m[0]=='push_back':
    d.append(m[1])
  if m[0]=='push_front':
    d.appendleft(m[1])
  if m[0]=='front':
    print(d[0] if d else -1)
  if m[0]=='back':
    print(d[-1] if d else -1)
  if m[0]=='size':
    print(len(d))
  if m[0]=='empty':
    print(0 if d else 1)
  if m[0]=='pop_front':
    print(d.popleft() if d else -1)
  if m[0]=='pop_back':
    print(d.pop() if d else -1)