import sys
input = sys.stdin.readline

n = int(input()) 
line = list(map(int, input().split())) 
s = []
target = 1

while line:
    if line[0] == target:
        line.pop(0)
        target += 1
    else:
        s.append(line.pop(0))
    
    while s:
        if s[-1] == target:
            s.pop()
            target += 1
        else:
            break

print("Nice" if not s else "Sad")
