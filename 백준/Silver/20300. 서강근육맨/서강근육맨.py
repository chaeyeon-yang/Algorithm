import sys
input=sys.stdin.readline

# 운동기구의 개수
n=int(input())
# 각 운동 기구의 근손실 정도를 리스트로 받음 [1,2,3,4,5] 
loss=list(map(int,input().split()))
tmp=[]
loss.sort() # 오름차순으로 정렬
if(n%2==1):
    tmp.append(loss[-1])
    loss=loss[:-1]
for i in range(len(loss)//2):
        tmp.append(loss[i]+loss[len(loss)-1-i])
print(max(tmp))