from itertools import combinations
import sys
s=[int(sys.stdin.readline()) for _ in range(9)]

for i in combinations(s, 7):
  if sum(i)==100: 
    k=sorted(i)
    break
[print(i) for i in k]
