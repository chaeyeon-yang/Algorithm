
# deque이용
from os import popen
from collections import deque

d=deque()
for i in range(int(input())):
  d.appendleft(i+1)

for _ in range(len(d)-1):
  d.pop()
  temp=d.pop()
  d.appendleft(temp)


print(d[0])

