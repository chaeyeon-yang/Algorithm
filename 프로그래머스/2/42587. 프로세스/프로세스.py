def solution(priorities, location):
    answer = 0
    
    tmp = []
    for idx, i in enumerate(priorities):
        tmp.append((i, idx))

    while tmp:
        current = tmp.pop(0)
        if any(current[0] < x[0] for x in tmp):
            tmp.append(current)
        else:
            answer += 1
            if current[1] == location:
                return answer