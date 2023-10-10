import sys
from collections import deque
input = sys.stdin.readline

# 노드의 개수 N
N = int(input())
# 그래프 초기화
graph = [[]*(N+1) for _ in range(N+1)]
# 방문처리 초기화
visited = [0]*(N+1)

# 그래프 연결
for i in range(1, N):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)

def bfs():
  q = deque([1])
  visited[1] = 1
  while q:
    now = q.popleft()
    for nxt in graph[now]:
      if not visited[nxt]:
        visited[nxt] = now
        q.append(nxt)

bfs()
res = visited[2:]
for i in res:
  print(i)
