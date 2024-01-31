import sys
input = sys.stdin.readline
from itertools import permutations

n = int(input())
k = int(input())

li = [int(input()) for _ in range(n)]
res = []
number = ''

cnt = []

for i in permutations(li, k):
    res.append(i)

for i in range(len(res)):
    number = ''
    for j in res[i]:
        number += str(j)
    cnt.append(number)

cnt = set(cnt)
print(len(cnt))