def solution(lottos, win_nums):
  zeros=lottos.count(0)
  cnt=0
  answer=[]
  for i in lottos:
    for j in win_nums:
      if i==j:
        cnt+=1
  good=7-(zeros+cnt)
  bad=7-cnt
  if good==7:
    good=6
  if bad==7:
    bad=6

  answer.append(good)
  answer.append(bad)
  return answer