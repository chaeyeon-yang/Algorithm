from collections import deque
import sys
input = sys.stdin.readline

N = int(input())

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
graph = [list(map(int, input().rstrip())) for _ in range(N)]
visited = [[False]*(N) for _ in range(N)]
apart = 0
res = []

def bfs(a, b):
  q = deque()
  q.append([a,b])
  visited[a][b] = True
  cnt = 1
  while q:
    now = q.popleft()
    x = now[0]
    y = now[1]
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]
      if check_range(nx, ny) and graph[nx][ny] and not visited[nx][ny]:
        cnt+=1
        visited[nx][ny] = True
        q.append([nx ,ny])
  return cnt

def check_range(x, y) :
  return 0<=x<N and 0<=y<N

for i in range(N):
  for j in range(N):
    if graph[i][j] and not visited[i][j]:
      apart+=1
      res.append(bfs(i,j))

print(apart)
res.sort()
for i in res:
  print(i)