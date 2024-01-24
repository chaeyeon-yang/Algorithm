import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

N = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]

def dfs(n):
    if visited[n] == True:
        return False

    visited[n] = True
    for i in range(N):
        if graph[n][i] == 1:
            tracking.append(i) 
            dfs(i)


for n in range(N):
    tracking = [] 
    visited = [False] * N 
					
    dfs(n)
    for k in tracking:
        graph[n][k] = 1

for i in graph:
    for k in range(N):
        print(i[k], end=" ")
    print()