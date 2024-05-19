import sys
input = sys.stdin.readline

m = int(input())
li = list(map(int, input().split()))

tmp_jun = 0
jun_money = m

for i in li:
  if jun_money == 0:
    break
  if jun_money//i > 0:
    tmp_jun += jun_money//i
    jun_money = jun_money%i

def sung():
  tmp_sung = 0
  sung_money = m
  up = 0
  down = 0
  for i in range(len(li)):
    if i > 0 and li[i] > li[i-1]:
        up += 1
        down = 0
        if up == 3:
          sung_money += tmp_sung*li[i]
          tmp_sung = 0

    if sung_money//li[i] > 0:
      if i > 0 and li[i] < li[i-1]:
        down += 1
        up = 0
        if down >= 3:
          tmp_sung += sung_money//li[i]
          sung_money = sung_money%li[i]
  return tmp_sung*li[-1] + sung_money

tmp_jun = tmp_jun*li[-1] + jun_money

if (sung() < tmp_jun):
  print("BNP")
elif sung() > tmp_jun:
  print("TIMING")
else:
  print("SAMESAME")