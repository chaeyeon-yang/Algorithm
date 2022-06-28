import sys
def find(n):
  for i in range(len(t)):
    for j in range(len(t)):
      for k in range(len(t)):
        if t[i]+t[j]+t[k] == n:
          return 1
  return 0

t=[1]
for i in range(2,45):
  t.append(t[-1]+i)

a=int(sys.stdin.readline())
for i in range(a):
  n=int(sys.stdin.readline())
  print(find(n))