import sys
from collections import deque
input = sys.stdin.readline

#인접리스트
n, m, r = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [0]*(n+1)
cnt = 1

for _ in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)


def bfs(start):
  global cnt
  q = deque([start])
  visited[start] = 1
  while q:
    now = q.popleft()
    graph[now].sort()
    for i in graph[now]:
      if visited[i] == 0:
        cnt += 1
        visited[i] = cnt
        q.append(i)

bfs(r)

for i in visited[1:]:
  print(i)