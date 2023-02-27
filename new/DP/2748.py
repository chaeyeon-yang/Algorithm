# Top-down 방식
# 기존의 방식대로 접근하면 중복 호출이 발생하므로 시간초과가 발생
# 메모이제이션 방식 적용해야함
import sys
# 초기값에 음수를 넣어 구현 기록 확인
cache = [-1]*91
cache[0] = 0
cache[1] = 1

def f(n):
  if cache[n] == -1:
    cache[n] = f(n-1)+f(n-2)
  
  return cache[n]

print(f(int(sys.stdin.readline())))