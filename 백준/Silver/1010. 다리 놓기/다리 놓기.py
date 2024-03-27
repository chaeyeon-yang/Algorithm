import sys

input = sys.stdin.readline
t = int(input())

for _ in range(t):
  a, b = map(int, sys.stdin.readline().split())
  num = 0
  res = 1
  divide = 1
  for i in range(a):
    res *= (b-i)
  for j in range(1, a+1):
    divide *= j
  print(res//divide)