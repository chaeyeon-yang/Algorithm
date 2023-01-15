import sys
cnt=int(sys.stdin.readline())
scores=list(map(int, sys.stdin.readline().split()))
new_scores=[]
_sum=0
for i in scores:
    maxNum=max(scores)
    new_scores.append(i/maxNum*100)
for j in range(cnt):
    _sum += new_scores[j]
print(_sum/cnt)
