# cook your dish here
def calc(size):
    count=0
    i=1
    while(i<=size):
        count = count + (size-i+1)**2
        i = i + 2
    print(count)
    
n = int(input())
for i in range(n):
    calc(int(input()))