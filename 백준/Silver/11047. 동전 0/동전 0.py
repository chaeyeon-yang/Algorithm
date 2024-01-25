import sys

# Ai는 Ai-1의 배수라는 말이 있으므로 그리디로 접근할 수 있다.

n, k = map(int, sys.stdin.readline().split());
m = [int(sys.stdin.readline())for _ in range(n)]
m.reverse()
total = 0
for i in m:
  if k//i==0: continue
  else:
    total+= k//i
    k-=i*(k//i)

print(total)