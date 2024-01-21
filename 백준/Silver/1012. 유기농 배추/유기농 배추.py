import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

def check(x, y):
    return 0<=x<M and 0<=y<N

def dfs(x, y):
    dx = [1,0,-1,0]
    dy = [0,1,0,-1]
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if (check(nx, ny) and graph[ny][nx]==1):
            graph[ny][nx]=2
            dfs(nx, ny)

T = int(input())
for i in range(T):
    M, N, K = map(int, input().split())
    graph = [[0]*M for _ in range(N)]

    for _ in range(K):
        a, b = map(int, input().split())
        graph[b][a] = 1
    cnt=0
    for i in range(M):
        for j in range(N):
            if (graph[j][i]==1):
                dfs(i, j)
                cnt+=1

    print(cnt)

