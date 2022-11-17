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

  if s:
    isVPS=False
  if isVPS: print("YES") 
  else: print("NO")