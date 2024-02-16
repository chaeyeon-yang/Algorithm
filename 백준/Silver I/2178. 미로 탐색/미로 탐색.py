from collections import deque

N, M = map(int, input().split())

graph = [list(input()) for _ in range(N)]

dx = (1,0,-1,0)
dy = (0,1,0,-1)

def check(x,y):
  return 0<=x<N and 0<=y<M

def bfs(start_x, start_y):
    q=deque()
    q.append((start_x, start_y, 1))
    visited = [[False]*M for _ in range(N)]
    visited[start_x][start_y] = True
    
    while q:
      x, y, cnt = q.popleft()
      if(x==N-1 and y==M-1) :
        return cnt
      
      for i in range(4):  
        mx = x + dx[i] 
        my = y + dy[i]
        if (check(mx, my) and graph[mx][my]=="1" and not visited[mx][my]):
          q.append((mx, my, cnt + 1))
          visited[mx][my] = True

print(bfs(0,0))