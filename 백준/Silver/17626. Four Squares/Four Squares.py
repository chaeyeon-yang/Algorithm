n = int(input())
pows = [i**2 for i in range(int(n**0.5), 0, -1)]
r = 4

if n in pows:
    r = 1
else:
    pows2 = {i+j for i in pows for j in pows if i+j <= n}
    
    if n in pows2:
        r = 2
    elif n in {i+j for i in pows for j in pows2 if i+j <= n}:
        r = 3

print(r)