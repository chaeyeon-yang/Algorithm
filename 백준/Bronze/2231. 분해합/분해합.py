import sys
input = sys.stdin.readline

N = int(input())
not_found = True

for i in range(1, N+1):
    now = sum(map(int, str(i)))
    now_sum = i + now
    if (now_sum == N):
        not_found = False
        print(i)
        break

if (not_found):
    print(0)