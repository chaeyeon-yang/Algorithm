import sys
from collections import deque
n=int(sys.stdin.readline())
dq=deque()
for i in range(1,n+1):
  dq.appendleft(i)

while(len(dq)!=1):
  dq.pop()
  dq.appendleft(dq.pop())
print(dq.pop())