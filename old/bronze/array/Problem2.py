import sys
k=[]
for i in range(9):
    k.append(int(sys.stdin.readline()))
print(max(k))
print(k.index(max(k))+1)
