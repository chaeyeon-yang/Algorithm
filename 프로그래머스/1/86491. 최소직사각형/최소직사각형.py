def solution(sizes):
    max_sero = 0
    max_garo = 0
    for i in sizes:
        if (i[0]<i[1]):
            i[0], i[1] = i[1], i[0]
        if max_garo < i[0]:
            max_garo = i[0]
        if max_sero < i[1]:
            max_sero = i[1]
    
    return max_garo*max_sero