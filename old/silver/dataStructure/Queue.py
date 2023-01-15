<<<<<<< HEAD
import sys

def push(s):
    x.append(s)

def empty():
    if size()==0:
        return 1
    else:
        return 0
def pop():
    if size()==0: return -1
    item=x[0]
    del x[0]
    return item

def size():
    return len(x)

def front(x):
    if size()==0: return -1
    item=x[0]
    return item
def back(x):
    if size()==0: return -1
    item=x[-1]
    return item

x=[]
n=int(sys.stdin.readline())
for i in range(n):
    k=sys.stdin.readline().split()
    if k[0]=="push": push(k[1])
    elif k[0]=="pop": print(pop())
    elif k[0]=="size": print(size())
    elif k[0]=="empty": print(empty())
    elif k[0]=="front": print(front(x))
=======
import sys

def push(s):
    x.append(s)

def empty():
    if size()==0:
        return 1
    else:
        return 0
def pop():
    if size()==0: return -1
    item=x[0]
    del x[0]
    return item

def size():
    return len(x)

def front(x):
    if size()==0: return -1
    item=x[0]
    return item
def back(x):
    if size()==0: return -1
    item=x[-1]
    return item

x=[]
n=int(sys.stdin.readline())
for i in range(n):
    k=sys.stdin.readline().split()
    if k[0]=="push": push(k[1])
    elif k[0]=="pop": print(pop())
    elif k[0]=="size": print(size())
    elif k[0]=="empty": print(empty())
    elif k[0]=="front": print(front(x))
>>>>>>> 8631af4151e4591947ce5e346bac361d7f14660d
    elif k[0]=="back": print(back(x))