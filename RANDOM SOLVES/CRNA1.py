import math as m
t = int(input())
while(t>0):
    n = int(input())
    x = list(map(int, input().split()))
    b=[]
    b[:n] = [0] * n
    for i in range(0,n):
        b[int(m.sqrt(x[i]))-1] += 1
    j = b.index(0)
    print((j+1)*(j+1))
    t=t-1