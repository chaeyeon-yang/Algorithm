import sys
input = sys.stdin.readline

docs = list(input().rstrip())
word = list(input().rstrip())
cnt = 0
now = 0

for i in range(len(docs)):
    if now > i:
        continue
    if docs[i:len(word)+i] == word:
        cnt += 1
        now = i+len(word)

print(cnt)