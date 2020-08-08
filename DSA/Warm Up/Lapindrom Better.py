try:
    ar=[]
    for t in range(int(input())):
        b=input()
        c='YES'
        if((len(b)%2)==0):
            b1=b[:len(b)//2]
            b2=b[len(b)//2:]
        else:
            b1=b[:len(b)//2]
            b2=b[(len(b)//2)+1:]
        for i in set(b):
            if(b1.count(i)!=b2.count(i)):
                c='NO'
                break
        ar.append(c)
    for i in ar:
        print(i)
except:
    pass