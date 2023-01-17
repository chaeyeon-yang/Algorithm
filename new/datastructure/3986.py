import sys
cnt=0
for _ in range(int(sys.stdin.readline())):
  m=sys.stdin.readline().rstrip()
  s=[]
  for i in m:
    if s and i==s[-1]:
      s.pop()
    else:
      s.append(i)

  if not s:
    cnt+=1

print(cnt)