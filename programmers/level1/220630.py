from collections import defaultdict

def solution(id_list, report, k):
  # 한 유저가 동일 유저를 중복 신고하는 경우 처리
  report = list(set(report))
  answer=[]
  # user별 신고한 id 저장
  user = defaultdict(set)
  # user별 신고당한 횟수
  cnt = defaultdict(int)

  for i in report:
    # a: 신고한 id b: 신고당한 id
    a,b=i.split()
    user[a].add(b)
    cnt[b]+=1

  for j in id_list:
    res=0
    for p in user[j]:
      if cnt[p]>=k:
        res+=1
    answer.append(res)

  return answer