T = int(input())
# M개중 N개 선택

def bino(m,n):
  if cache[m][n]:
    return cache[m][n]
  if n == 0 or n == m:
    cache[m][n] = 1
  else:
    cache[m][n] = bino(m-1, n-1) + bino(m-1, n)
  
  return cache[m][n]

for i in range(T):
  cache = [[0]*31 for _ in range(31)]
  N, M = map(int, input().split())
  print(bino(M, N))