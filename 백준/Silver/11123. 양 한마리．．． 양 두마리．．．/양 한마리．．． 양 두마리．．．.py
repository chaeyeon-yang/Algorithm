import sys
from collections import deque
input = sys.stdin.readline

def check(x, y):
    return 0<=x<H and 0<=y<W

def bfs(x, y):
    dx = [1,0,-1,0]
    dy = [0,1,0,-1]

    q = deque([(x, y)])
    graph[x][y] = '.'

    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if (check(nx, ny) and graph[nx][ny] == '#'):
                graph[nx][ny] = '.'
                q.append((nx, ny))
    return 1

for i in range(int(input())):
    cnt = 0
    H, W = map(int, input().split())
    graph = [list(input().rstrip()) for _ in range(H)]
    cnt=0
    for a in range(H):
        for b in range(W):
            if (graph[a][b] == '#'):
                cnt += bfs(a, b)
    print(cnt)