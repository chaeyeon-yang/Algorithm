# Bottom-up
# cache 사용 (메모이제이션)
# 반복문 사용
n = int(input())

cache = [-1]*91
cache[0] = 0
cache[1] = 1

for i in range(2, n+1):
  cache[i] = cache[i-1] + cache[i-2]

print(cache[n])