import sys
input = sys.stdin.readline

S = list(input().rstrip())

zero_cnt = 0
one_cnt = 0

for i in range(len(S)):
    if i==0 and S[i] == '1':
        one_cnt += 1
    if i==0 and S[i] == '0':
        zero_cnt += 1
    if i>0 and S[i] == '1':
        if S[i-1] == '0':
            one_cnt += 1
        else:
            continue
    if i>0 and S[i] == '0':
        if S[i-1] == '1':
            zero_cnt += 1
        else:
            continue

print(min(zero_cnt, one_cnt))