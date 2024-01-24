N = int(input())
res = list(map(int, input().split()))
cnt = 0

for i in res:
    sosu = True
    if (i!=1):
        for j in range(2, i):
            if (i%j==0):
                sosu = False
        if (sosu):
            cnt+=1
print(cnt)