import sys
input = sys.stdin.readline

A, B = map(int, input().split())
N = int(input())
star = [int(input()) for _ in range(N)]

near = []

for i in star: 
    near.append(abs(B-i)+1)

if (abs(A-B) < min(near)):
    print(abs(A-B))
else:
    if (min(near) == 0):
        print(1)
    else:
        print(abs(min(near)))
