import sys
from collections import deque
input = sys.stdin.readline

N, M = map(int, input().split())
graph = []
visited = [[0]*(M) for _ in range(N)]
start = []

for i in range(N):
    k = list(input().rstrip())
    if ('I' in k):
        start.append((i, k.index('I')))
    graph.append(k)

def check(x, y):
    return 0<=x<N and 0<=y<M

cnt = 0
def bfs(start):
    dx = [1,0,-1,0]
    dy = [0,1,0,-1]

    x, y = start.pop()
    q = deque([(x, y)])
    visited[x][y] = 1   

    global cnt
    
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if (check(nx, ny) and graph[nx][ny] != 'X' and visited[nx][ny] == 0):
                visited[nx][ny] = 1
                q.append((nx, ny))
                if (graph[nx][ny] == 'P'):
                    cnt+=1

bfs(start)
print('TT' if cnt == 0 else cnt)