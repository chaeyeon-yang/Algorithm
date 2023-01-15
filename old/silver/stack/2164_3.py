#배열로 푸는 경우
#시간이 오래 걸리나 가능은 함
#비효율적. 시간복잡도 n2

n=int(input())
arr=[*range(1,n+1)] #*으로 언패킹

while(len(arr)>1):
  arr.pop(0)
  arr.append(arr.pop(0))

print(arr.pop())