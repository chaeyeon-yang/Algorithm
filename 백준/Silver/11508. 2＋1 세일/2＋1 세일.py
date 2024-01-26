import sys
input = sys.stdin.readline

N = int(input())
price = [int(input()) for _ in range(N)]
price.sort(reverse=True)
res = 0

for i in range(2,N,3):
    res += price[i]
print(sum(price)-res)