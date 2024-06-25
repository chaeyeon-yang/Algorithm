def solution(prices):
    li = []
    for i in range(len(prices)):
        num = 0
        for j in range(i+1, len(prices)):
            num+=1
            if prices[i] > prices[j]:
                break
    
        li.append(num)
        
        
    return li