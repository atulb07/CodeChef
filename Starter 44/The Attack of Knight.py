def possibilities(x,y):
    arr = []
    
    if(x+2>0 and y+1>0 and x+2<9 and y+1<9):
        arr.append((x+2,y+1))
    if(x+2>0 and y-1>0 and x+2<9 and y-1<9):
        arr.append((x+2,y-1))
    if(x-2>0 and y+1>0 and x-2<9 and y+1<9):
        arr.append((x-2,y+1))
    if(x-2>0 and y-1>0 and x-2<9 and y-1<9):
        arr.append((x-2,y-1))
    
    if(x+1>0 and y+2>0 and x+1<9 and y+2<9):
        arr.append((x+1,y+2))
    if(x-1>0 and y+2>0 and x-1<9 and y+2<9):
        arr.append((x-1,y+2))
    if(x+1>0 and y-2>0 and x+1<9 and y-2<9):
        arr.append((x+1,y-2))
    if(x-1>0 and y-2>0 and x-1<9 and y-2<9):
        arr.append((x-1,y-2))
        
    return arr

t = int(input())

while(t):
    flag = False
    x1, y1 = map(int,input().split())
    x2, y2 = map(int,input().split())
    poss1 = possibilities(x1,y1)
    poss2 = possibilities(x2,y2)

    for a in poss1:
        for b in poss2:
            if a == b:
                flag = True

    if flag:
        print('YES')
    else: 
        print('NO')

    t-=1
