import sys
n=['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
nums=sys.stdin.readline()
time=0
for a in n:
    for b in a:
        for c in nums:
            if c==b:
                time+=n.index(a)+3
print(time)
