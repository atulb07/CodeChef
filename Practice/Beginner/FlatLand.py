# cook your dish here
import math
def abc(n):
    count =0
    a = 0
    while n>0:
        a = math.floor(math.sqrt(n))
        count = count + 1
        n = n-(a**2)
    print(count)
    
for i in range(int(input())):
    abc(int(input()))