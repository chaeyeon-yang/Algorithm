n,m = map(int, input().split())
ans = []

def dfs():
  if len(ans) == m:
    print(' '.join(map(str, ans)))
  
  for i in range(1, n+1):
    if i not in ans:
      ans.append(i)
      dfs()
      ans.pop()

dfs()