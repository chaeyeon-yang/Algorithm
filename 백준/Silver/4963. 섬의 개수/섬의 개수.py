import sys
from collections import deque
input = sys.stdin.readline

def check(x, y):
    return 0<=x<w and 0<=y<h

def bfs(y, x):
    dx = [1,0,-1,0,1,-1,1,-1]
    dy = [0,1,0,-1,1,-1,-1,1]

    q = deque([(y, x)])

    while q:
        y, x = q.popleft()
        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= w or ny < 0 or ny >= h:
                continue
            if graph[ny][nx]==0:
                continue

            if graph[ny][nx]==1:
                graph[ny][nx]=0
                q.append((ny,nx))

while True:
    w, h = map(int, input().split())
    
    if w == 0 and h == 0:
        break

    graph = []
    for _ in range(h):
        graph.append(list(map(int, input().split())))

    cnt = 0
    for i in range(h):
        for j in range(w):
            if (graph[i][j]==1):
                cnt+=1
                bfs(i, j)
                
    print(cnt)






