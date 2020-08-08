# cook your dish here
length = int(input())
arr = [int(input()) for i in range(length)]
arr = sorted(arr)
max =0
for i in range(length):
    if(arr[i]*length>max):
        max = arr[i]*length
    length= length-1 
print(max)