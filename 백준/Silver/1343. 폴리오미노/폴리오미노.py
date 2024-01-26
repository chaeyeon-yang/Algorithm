import sys
m=sys.stdin.readline()
m=m.replace('XXXX','AAAA')
m=m.replace('XX','BB')
print(-1 if 'X' in m else m)
