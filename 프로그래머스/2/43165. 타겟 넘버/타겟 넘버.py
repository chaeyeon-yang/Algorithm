def solution(numbers, target):
    leaves = [0]          # 모든 계산 결과를 담자      
    count = 0 

    for num in numbers : 
        temp = []

        # 자손 노드 
        for leaf in leaves : 
            temp.append(leaf + num)    
            temp.append(leaf - num)    
        leaves = temp 

    for leaf in leaves : 
        if leaf == target : 
            count += 1

    return count