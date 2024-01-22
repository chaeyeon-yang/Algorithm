import sys
from collections import deque

input = sys.stdin.readline

N = int(input())
graph = [[] for _ in range(N+1)]
visited = [0]*(N+1)

for i in range(N-1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def bfs():
    q = deque([1])
    while q:
        now = q.popleft()
        for nxt in graph[now]:
            if (visited[nxt] == 0):
                visited[nxt] = now
                q.append(nxt)

bfs()

for i in range(2, N+1):
    print(visited[i])