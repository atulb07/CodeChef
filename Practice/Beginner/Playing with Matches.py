# cook your dish here
matches = [6,2,5,5,4,5,6,3,7,6]
for i in range(int(input())):
    a,b= map(int,input().split())
    c = a+b
    count =0
    while(c>0):
        count = count + matches[int(c%10)]
        c=c//10
    print(count)