# 03-05-2022

n = int(input())
a = 0
b = 1
c = 0

for i in range (n):
    if i==0:
        print(a,end = ' ')
        
    elif i==1:
        print(b,end = ' ')
        
    elif i<n-1:
        c=a+b
        print(c,end = ' ')
        a=b
        b=c
        
    else:
        c=a+b
        print(c)