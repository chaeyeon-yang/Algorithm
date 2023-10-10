from collections import deque
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
visited = [False]*(N+1)
cnt=0

for _ in range(M):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)

def bfs(V):
  q = deque([V])
  visited[V] = True
  while q:
    now = q.popleft()
    for nxt in graph[now]:
      if not visited[nxt]:
        visited[nxt] = True
        q.append(nxt)

for i in range(1, N+1):
  if not visited[i]:
    bfs(i)
    cnt+=1

print(cnt)