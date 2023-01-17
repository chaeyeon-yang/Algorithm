from itertools import combinations, permutations
import sys
s=[]
k=[]
[s.append(int(sys.stdin.readline())) for _ in range(9)]

for i in permutations(s, 7):
  if sum(i)==100: 
    k=sorted(i)
    break
[print(i) for i in k]
