import sys
input = sys.stdin.readline

n = int(input())
num = int(input())

li = [[0]*n for _ in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

nx = n//2
ny = n//2

li[nx][ny] = 1

i = 2
start = 3

while nx != 0 or ny != 0:
    while i <= start * start:
        if nx == ny == n//2: # 시작점이면 cnt 세팅, 한 칸 위로
            cnt_up, cnt_down, cnt_left, cnt_right = start, start - 1, start - 1, start - 2
            nx += dx[0]
            ny += dy[0]
            cnt_up -= 1

        elif cnt_right > 0: # 우
            nx += dx[3]
            ny += dy[3]
            cnt_right -= 1

        elif cnt_down > 0: # 하
            nx += dx[1]
            ny += dy[1]
            cnt_down -= 1

        elif cnt_left > 0: # 좌
            nx += dx[2]
            ny += dy[2]
            cnt_left -= 1

        elif cnt_up > 0: # 상
            nx += dx[0]
            ny += dy[0]
            cnt_up -= 1

        li[nx][ny] = i
        i += 1

    n -= 2
    start += 2

for j in range(len(li)):
    print(*li[j])
    if num in li[j]:
        mx = j + 1
        my = li[j].index(num) + 1
print(mx, my)

