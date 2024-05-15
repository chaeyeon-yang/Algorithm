import sys
input = sys.stdin.readline

st = input()
keyword = input()
tmp = ''

for i in st:
  if i < '0' or i > '9':
    tmp += i

if keyword in tmp:
  print(1)
else:
  print(0)
  