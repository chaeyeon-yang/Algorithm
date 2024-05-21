import sys
input = sys.stdin.readline

n, m  = map(int, input().split())
chingho = [input().split() for _ in range(n)]
chingho.sort(key=lambda x: int(x[1]))

li = [int(input().strip()) for _ in range(m)]
for i in li:
  end = len(chingho)-1
  start = 0

  while start <= end:
    mid = (start+end)//2
    if i > int(chingho[mid][1]):
      start = mid+1 
    else:
      end = mid-1

  print(chingho[start][0])