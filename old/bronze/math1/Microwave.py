import sys
n=int(sys.stdin.readline())
an=n//300
bn=(n%300)//60
cn=(n%300)%60//10
if ((n%300)%60)%10!=0: print(-1)
else: print(an,bn,cn)
