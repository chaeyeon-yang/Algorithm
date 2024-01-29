import sys
input = sys.stdin.readline

N = int(input())
tree = list(map(int, input().split()))
tree.sort(reverse=True)


days = []
haru = 1

for i in range(N):
    if (i == 0):
        days.append(tree[i])
    else:
        haru += 1
        days.append(haru + tree[i]-1)
    
print(max(days)+2)