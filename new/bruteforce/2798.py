from itertools import combinations
import sys
n,m=map(int, sys.stdin.readline().split())
nums=list(map(int, sys.stdin.readline().split()))
res=[]
for i in combinations(nums, 3):
  if sum(i)<=m:
    res.append(sum(i))

res.sort()
print(res[-1])