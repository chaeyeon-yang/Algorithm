from itertools import permutations
N, M = map(int, input().split())
li = [i for i in range(1,N+1)]
for i in permutations(li, M):
  print(*i)