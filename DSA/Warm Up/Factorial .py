# cook your dish here
t =int(input())
while t:
    num = int(input()) 
    count = 0
    while num!=0:
        num //=5 
        count += num
    print(count)
    t-=1 