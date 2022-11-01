b1,b2= input().split()
b1 = int(b1)
b2 = int(b2)
if b1 < b2 :
    for i in range(b1,b2):
        print(b1,b2, end=' - ')
        b1 += 1
        b2 -= 1
        continue
    print(b1,b2, end=' ')    
    b1 += 1
    b2 -= 1
else:
    if b1 > b2 :
       n1=b1
       n2=b2
       for i in range(b2,b1):
        print(b1,b2, end=' - ')
        b1 -= 1
        b2 += 1
        if b1 % n2 == 1:
          break
    if b1 < b2:
        for i in range(b1,b2):   
           print(b1,b2, end=' - ')    
           b1 += 1
           b2 -= 1 
           break
        print(b1, b2, end=' ')
        b1 -= 1
        b2 += 1  