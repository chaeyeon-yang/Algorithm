
def solution(nums):
    answer = 0
    tmp = set(nums)
    
    if len(tmp) > len(nums)//2:
        answer = len(nums)//2
    else:
        answer = len(tmp)
        
    return answer