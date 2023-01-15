def solution(lottos, win_nums):
  # 0개, 1개->6등
  # 2개->5등, 3개->4등, 4개->3등, 5개->2등, 6개->1등
  res=[6,6,5,4,3,2,1]
  zeros=lottos.count(0)
  cnt=0
  # 번호의 순서와 상관없이 일치여부 확인
  for x in lottos:
    if x in win_nums:
      cnt+=1

  return res[zeros+cnt], res[cnt]