import sys
input = sys.stdin.readline

N = int(input())
game = ['SK','CY','SK','SK']

if N > 4:
  for i in range(4, N):
    if game[i-1] =='CY' or game[i-3] == 'CY' or game[i-4] == 'CY':
      game.append('SK')
    else:
      game.append('CY')


print(game[N-1])