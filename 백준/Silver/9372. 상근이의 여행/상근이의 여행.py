from collections import deque
import sys
input = sys.stdin.readline

T = int(input())

def bfs(V):
  q = deque([V])
  visited[V] = True
  cnt=0
  while q:
    now = q.popleft()
    for nxt in graph[now]:
      if not visited[nxt]:
        visited[nxt] = True
        cnt+=1
        q.append(nxt)
  print(cnt)


for _ in range(T):
  N, M = map(int, input().split())
  graph = [[] for _ in range(N+1)]
  visited = [False]*(N+1)
  V = 0
  for i in range(M):
    a, b = map(int, input().split())
    if i==0:
      V = a
    graph[a].append(b)
    graph[b].append(a)

  bfs(V)
