import sys
input = sys.stdin.readline

n = int(input())

dp = [0]*n

li = list(map(int, input().split()))
dp[0] = li[0]

for i in range(n):
  for j in range(i):
    if (li[i] > li[j]):
      dp[i] = max(dp[i], li[i]+dp[j])
    else:
      dp[i] = max(dp[i], li[i])

print(max(dp))
