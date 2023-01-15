import sys
nums = []
for i in range(10):
    a=int(sys.stdin.readline())
    nums.append(a%42)
nums = set(nums)
print(len(nums))
