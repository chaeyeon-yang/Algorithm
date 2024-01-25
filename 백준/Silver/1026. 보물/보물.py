import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
total = 0
for i in range(N):
    x = A[i]
    y = B.pop(B.index(max(B)))

    total += x*y

print(total)