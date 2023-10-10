from collections import deque

# 정점의 수 N, 간선의 수 M, 시작 정점 R
N, M, R = map(int, input().split())

# 그래프 초기화
graph =[[]*(N+1) for _ in range(N+1)]
# 방문체크
visited = [0]*(N+1)

# q 선언
q = deque([R])
# 방문순서 저장
cnt=1
# 시작 정점 방문처리
visited[R] = cnt

# 그래프 연결
for i in range(M):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)

for i in range(1, N+1) :
  graph[i].sort()

def bfs():
  global cnt
  while q:
    now = q.popleft()
    for nxt in graph[now]:
      if not visited[nxt]:
        cnt+=1
        visited[nxt] = cnt
        q.append(nxt)

bfs()
for i in range(1, N+1):
  print(visited[i])