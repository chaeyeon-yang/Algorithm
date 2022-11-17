for _ in range(int(input())):
  s=[]
  isVPS=True
  for i in input():
    if i=='(':
      s.append(i)
    else:
      if s:
        s.pop()
      else:
        isVPS=False
        break

  if s:
    isVPS=False
  print("YES" if isVPS else "NO")