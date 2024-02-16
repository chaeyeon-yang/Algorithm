import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
res = 0
a.sort()

for i in a:
  tmp = i*max(b)
  res += tmp
  b.remove(max(b))

print(res)