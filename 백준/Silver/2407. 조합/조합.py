import sys
input = sys.stdin.readline

n, m = map(int, input().split())

def factorial(x):
  if x <= 1:
    return 1
  return x*factorial(x-1)

res = 1
for i in range(m):
  res *= (n-i)


print(res//factorial(m))