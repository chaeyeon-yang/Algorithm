def solution(id_list, report, k):
  answer=[0]*len(id_list)
  report = list(set(report))
  # id 당 신고당한 횟수를 저장하는 딕셔너리
  reports = {i:0 for i in id_list}

  for i in report:
    reports[i.split()[1]]+=1

  for j in report:
    if reports[i.split()[1]]>=k:
      answer[id_list.index(i.split()[0])]+=1
  return answer