import sys
low='abcdefghijklmnopqrstuvwxyz'
str1=sys.stdin.readline()
res=[]

for i in low:
    check=False
    for j in str1:
        if(i==j):
            res.append(str1.index(i))
            check=True
            break
    if(check==False):
        res.append(-1)

for i in res:
    print(i, end=" ")
