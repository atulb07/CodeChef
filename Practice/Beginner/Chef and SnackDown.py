# cook your dish here
Years =[2010, 2015, 2016, 2017 ,2019]
n = int(input())
for i in range(n):
    if(int(input()) in Years):
        print('HOSTED')
    else:
        print('NOT HOSTED')