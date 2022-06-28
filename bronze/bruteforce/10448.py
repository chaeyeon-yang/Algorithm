# import sys
# def find(n):
#   for i in range(len(t)):
#     for j in range(len(t)):
#       for k in range(len(t)):
#         if t[i]+t[j]+t[k] == n:
#           return 1
#   return 0

# t=[1]
# for i in range(2,45):
#   t.append(t[-1]+i)

# a=int(sys.stdin.readline())
# for i in range(a):
#   n=int(sys.stdin.readline())
#   print(find(n))

# ----------------> 시간초과 발생

import sys

ans=[0]*1001
t=[]
for i in range(1, 45):
  t.append(i*(i+1)//2)

  for i in t:
    for j in t:
      for k in t:
        if i+j+k<=1000:
          ans[i+j+k]=1

n=int(sys.stdin.readline())
for i in range(n):
  k=int(sys.stdin.readline())
  print(ans[k])

