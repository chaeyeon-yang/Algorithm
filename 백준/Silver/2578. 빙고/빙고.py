import sys
input = sys.stdin.readline

user = [list(map(int, input().split())) for _ in range(5)]
tmp = [list(map(int, input().split())) for _ in range(5)]
computer = []

for i in tmp:
  for j in i:
    computer.append(j)

def check():
  bingo = 0
  
  for i in range(5):
    if sum(user[i]) == 0:
      bingo += 1

  for i in range(5):
    if (user[0][i] == 0 and user[1][i] == 0
      and user[2][i] == 0 and user[3][i] == 0 and user[4][i] == 0):
      bingo += 1

  d1 = 0
  for i in range(5):
    if user[i][i] == 0:
      d1 += 1
  if d1 == 5:
    bingo += 1

  d2 = 0
  for i in range(5):
    if user[i][5-i-1] == 0:
      d2 += 1
  if d2 == 5:
    bingo += 1
  
  return bingo

for i in range(len(computer)):
  for a in range(5):
    for b in range(5):
      if user[a][b] == computer[i]:
        user[a][b] = 0
  if i >= 11:
    if check() >= 3:
      print(i+1)
      break
