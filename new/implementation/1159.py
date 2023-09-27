arr=[]
res=[]
for i in range(int(input())):
  n=input()
  arr.append(n[0])

arr_set=set(arr)

for i in arr_set:
  if arr.count(i)>=5:
    res.append(i)
    

res.sort()
ans=''.join(res)
print(ans if res else "PREDAJA")