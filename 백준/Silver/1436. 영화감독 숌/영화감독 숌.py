import sys
input = sys.stdin.readline

N = int(input())
cnt = 0
res = 666
while True:
    if '666' in str(res):
        cnt += 1
    if cnt == N:
        break
    res += 1
    
print(res)