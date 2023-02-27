# Bottom-up
# 반복문 이용
# 근데 가장 기초적인 방식..

n = int(input())
li=[]
for i in range(n+1):
  if i == 0 or i == 1:
    li.append(i)
  else:
    li.append(li[i-1]+li[i-2])

print(li.pop())   