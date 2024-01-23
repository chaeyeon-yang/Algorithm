import sys
from collections import deque
input = sys.stdin.readline

# 인접 행렬
# bfs
N = int(input())
graph = []
max_value = 0
for _ in range(N):
    k = list(map(int, input().split()))
    if (max_value < max(k)):
        max_value = max(k)
    graph.append(k)

def check(x, y):
    return 0<=x<N and 0<=y<N

def bfs(x, y, max_value, visited):
    dx = [1,0,-1,0]
    dy = [0,1,0,-1]

    q = deque()
    q.append((x, y))
    visited[x][y] = True
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if check(nx, ny) and not visited[nx][ny] and graph[nx][ny] > max_value:
                visited[nx][ny] = True
                q.append((nx, ny))

res = 0
for i in range(max_value):
    visited = [[False]*N for _ in range(N)]
    cnt = 0
    for k in range(N):
        for j in range(N):
            if (graph[k][j] > i and not visited[k][j]):
                bfs(k, j, i, visited)
                cnt += 1
    
    if res < cnt:
        res = cnt

print(res)