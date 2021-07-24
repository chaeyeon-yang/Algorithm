for _ in range(int(input())):
    case_dict = {}
    for _ in range(int(input())):
        name, category = input().split()
        try:
            case_dict[category] += 1
        except:
            case_dict[category] = 1
    result = 1
    for num_of_case in case_dict.values():
        result *= (num_of_case+1)
    print(result-1)
