import sys
cnt=int(sys.stdin.readline())
for i in range(cnt):
    q=sys.stdin.readline()
    a=0
    score=0
    for j in range(len(q)):
        if(q[j]=='O'):
           a+=1
           score+=a
        else:
            a=0
    print(score)
