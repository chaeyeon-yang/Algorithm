s=[int(input()) for _ in range(9)]
s.sort()
tot=sum(s)
for i in range(8):
  for j in range(i+1, 9):
    if tot-s[i]-s[j]==100:
      for k in range(9):
        if i!=k and j!=k:
          print(s[k])
      break