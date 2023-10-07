# 이코테
# 얼음 얼려먹기


N, M = map(int, input().split())

graph=[]
for i in range(N):
  graph.append(list(map(int, input())))


def check(x, y):
  return 0<=x<N and 0<=y<M

# dfs로 특정 노드를 방문하고 연결된 모든 노드들도 방문
def dfs(x, y):
  if check(x, y) == False:
    return False
  # 현재 노드를 방문하지 않았다면
  if graph[x][y] == 0:
    # 해당 노드 방문 처리
    graph[x][y]=1
    # 상, 하, 좌, 우 위치들도 모두 재귀적으로 호출
    dfs(x-1, y)
    dfs(x+1, y)
    dfs(x, y-1)
    dfs(x, y+1)
    return True
  return False

# 모든 노드에 대하여 음료수 채우기
result = 0
for i in range(N):
  for j in range(M):
    # 현재 위치에서 dfs 수행
    if dfs(i, j) == True:
      result +=1

print(result)
