import sys
input = sys.stdin.readline
from collections import deque

n, m, v = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited1 = [0]*(n+1)
visited2 = [0]*(n+1)

#인접리스트
for _ in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)
  graph[a].sort()
  graph[b].sort()

def bfs(v):
  q = deque([v])
  visited1[v] = 1
  print(v, end=" ")
  while q:
    now = q.popleft()
    for i in graph[now]:
      if visited1[i] == 0:
        visited1[i] = now
        print(i, end=" ")
        q.append(i)

def dfs(v):
  visited2[v] = 1
  print(v, end=" ")
  for nxt in graph[v]:
    if visited2[nxt] == 0:
      dfs(nxt)

dfs(v)
print()
bfs(v)
