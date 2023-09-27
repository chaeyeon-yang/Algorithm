import sys

def fib(n): 
  if n==1 or n==2:
    return 1
  else:
    return fib(n-1)+fib(n-2)
    

def fibonacci(n):
  arr = [0] * (n+1)
  arr[1] = arr[2] = 1
  count=0
  for i in range(3, n+1):
    count+=1
    arr[i]=arr[i-1]+arr[i-2]
  
  return count

n = int(sys.stdin.readline())
print(fib(n), fibonacci(n))