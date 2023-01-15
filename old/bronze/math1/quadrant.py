import sys
cnt=int(sys.stdin.readline())
q1=q2=q3=q4=0
axis=0
for i in range(cnt):
    x,y=map(int, sys.stdin.readline().split())
    if (x==0 or y==0): axis+=1
    elif (x>0 and y>0): q1+=1
    elif (x<0 and y>0): q2+=1
    elif (x<0 and y<0): q3+=1
    else: q4+=1
print("Q1:",q1,"\nQ2:",q2,"\nQ3:",q3,"\nQ4:",q4,"\nAXIS:",axis)
