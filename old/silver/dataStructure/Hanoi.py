import sys
n=int(sys.stdin.readline())
print(2**n-1)
def move(start, dest):
    print(start, dest)
def run(n,start, mid, dest):
    if n==1:
        return move(start, dest)
    else:
        run(n-1,start, dest, mid)
        move(start, dest)
        run(n-1,mid, start, dest)
run(n,1,2,3)
