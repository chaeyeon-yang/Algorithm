import sys
input = sys.stdin.readline
from itertools import combinations

li = [int(input()) for _ in range(9)]

for i in combinations(li, 7):
    if (sum(i) == 100):
        for j in i:
            print(j)
        break
