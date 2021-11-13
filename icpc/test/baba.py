import sys 
def get_ints(): return map(int, sys.stdin.readline().strip().split())
sys.stdin = open('mex.in', 'r')
t=int(input())
x,y=get_ints()
print(x)
print(y)
values=get_ints()
print(values)
