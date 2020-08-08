# cook your dish here
t = int(input())
while t:
    car =0
    s = input()
    arr = list(map(int,input().split()))
    minS= arr[0]
    for i in arr:
        if(i<=minS):
            car = car +1
            minS = i
    print(car)
    t = t-1