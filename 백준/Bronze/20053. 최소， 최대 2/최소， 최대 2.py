import sys
input = sys.stdin.readline

for i in range(int(input())):
  n = int(input())
  li = list(map(int, input().split()))
  print(min(li), max(li))
