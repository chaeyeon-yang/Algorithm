import sys
input = sys.stdin.readline

N = 1000 - int(input())
coins = [500,100,50,10,5,1]

def coin_cnt(N):
    cnt = 0
    for i in coins:
        if (N//i != 0):
            if (N%i == 0):
                cnt += N//i
                return cnt
            cnt += N//i
            N = N%i
    return cnt

print(coin_cnt(N))
