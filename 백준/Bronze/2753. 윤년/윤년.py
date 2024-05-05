import sys
input = sys.stdin.readline

n = int(input())
yun = False

if n%4 == 0:
  if n%100 !=0 or n%400 == 0:
    yun = True

print(1 if yun else 0)
