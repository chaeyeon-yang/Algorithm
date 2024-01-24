import sys
from collections import deque
input = sys.stdin.readline

N, M, V = map(int, input().split())
graph = [ []*(N+1) for _ in range(N+1)]

# 인접 리스트
for i in range(M):
    a,b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    graph[a].sort()
    graph[b].sort()


visited_1 = [False]*(N+1) # dfs
visited_2 = [False]*(N+1) # bfs

def dfs(graph, v, visited):
    visited[v] = True
    print(v, end=" ")
    
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


def bfs(graph, v, visited):
    queue = deque([v])
    visited[v] = True
        
    while queue:
        i = queue.popleft()
        print(i, end=" ")
        for j in graph[i]:
            if not visited[j]:
                queue.append(j)
                visited[j] = True
            
            
dfs(graph, V, visited_1)
print()
bfs(graph, V, visited_2)