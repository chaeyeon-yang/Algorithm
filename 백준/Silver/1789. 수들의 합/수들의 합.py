import sys
input = sys.stdin.readline

S = int(input())
total = 0
res = 0
for i in range(1, S+1):
    total += i
    res = i
    if (total>S):
        res -= 1
        break
print(res)