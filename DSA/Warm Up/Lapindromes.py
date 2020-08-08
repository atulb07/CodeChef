# cook your dish here
import math
for i in range(int(input())):
    x = input()
    a = x[0:math.floor(len(x)/2)]
    b = x[math.ceil(len(x)/2):]
    if(sorted(a)==sorted(b)):
        print('YES')
    else:
        print('NO')
    