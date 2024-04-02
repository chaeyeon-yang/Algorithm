import sys
input = sys.stdin.readline

n = int(input())
li = [int(input()) for _ in range(n)]

for i in range(n):
  for j in range(i):
    if li[i] < li[j]:
      li[i], li[j] = li[j], li[i]

for i in li:
  print(i)