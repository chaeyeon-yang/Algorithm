import sys
from collections import deque
q=deque()
for _ in range(int(sys.stdin.readline())):
  m=sys.stdin.readline().split()
  if m[0]=='push':
    q.append(m[1])
  if m[0]=='pop':
    print(q.popleft() if q else -1)
  if m[0]=='size':
    print(len(q))
  if m[0]=='empty':
    print(0 if q else 1)
  if m[0]=='front':
    print(q[0] if q else -1)
  if m[0]=='back':
    print(q[-1] if q else -1)
