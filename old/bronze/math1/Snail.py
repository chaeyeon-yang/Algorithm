#달팽이가 정상에 올라간 경우에는 내려오지 않는것을 유의
#time 모듈을 불러온 이유는 실행시간 테스트
#실제 실행 시 time모듈을 불러오고 코드를 더 쓰게 되면 시간초과 발생

import sys
import time
import math
start = time.time()
a,b,v=map(int, sys.stdin.readline().split())
day=(v-b)/(a-b)
print(math.ceil(day))
print("time :", time.time() - start)