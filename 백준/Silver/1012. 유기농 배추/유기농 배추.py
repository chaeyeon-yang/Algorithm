import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)

def dfs(x, y):
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if (0<=nx<n and 0<=ny<m and graph[nx][ny]==1):
            graph[nx][ny] = -1
            dfs(nx, ny)
    return 1

for i in range(int(input())):
    m, n, k = map(int, input().split())
    graph = [[0]*m for _ in range(n)]

    for _ in range(k):
        a, b = map(int, input().split())
        graph[b][a] = 1

    dx = [-1,1,0,0]
    dy = [0,0,-1,1]
    
    cnt = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                cnt += dfs(i, j)

    print(cnt)