from itertools import permutations

def solution(numbers):
    arr = set()
    
    
    answer=0
    
    for i in range(1, len(numbers)+1):
        for j in permutations(numbers, i):
            num = int(''.join(j))
            if num != 1 and num != 0:
                arr.add(num)
    
    for i in arr:
        sosu = True
        for j in range(2, int(i**(1/2))+1):
            if i%j==0:
                sosu = False
                break
                
        if(sosu):
            answer+=1
    
    return answer