import sys

input = sys.stdin.readline

n, m = map(int, input().split())

arr1 = []
arr2 = []
for i in range(n):
    x = input().rstrip()
    arr1.append(x)
for i in range(m):
    y = input().rstrip()
    arr2.append(y)

res = list(set(arr1) & set(arr2))
res.sort()
print(len(res))
for i in res:
    print(i)