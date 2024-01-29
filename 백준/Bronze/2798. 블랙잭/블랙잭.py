from itertools import combinations
import sys
input = sys.stdin.readline

N, M = map(int, input().split())
card = list(map(int, input().split()))
card.sort()
total = 0
tmp = []

for i in combinations(card, 3):
    if (sum(i) <= M):
        tmp.append(sum(i))
        if (tmp == M):
            break

print(max(tmp))