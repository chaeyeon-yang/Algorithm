import sys
input = sys.stdin.readline

N = int(input())
li = [int(input()) for _ in range(N)]
cnt = 0
me = li[0]
li = li[1:]
li.sort(reverse=True)

if N == 1:
    print(0)
else:
    while li[0] >= me:
        me += 1
        li[0] -= 1
        cnt += 1
        li.sort(reverse=True)
    print(cnt)