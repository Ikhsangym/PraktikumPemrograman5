b1, b2 = input().split()
b1 = int(b1)
b2 = int(b2)
has,has2,has3,i = 0,0,0,0 
while i< b1 :
  i += 1
  j = i
  if i == 0:
    break          
  while j > 0:
    j -= 1
    print('({} * {})'.format(j+1, b2), end=' ')
    if j > 0:
      print(' + ', end=' ')
  has = i * b2
  has2 += has
  print(' = {} '.format( has2))
  has3 += has2
print(' {} '.format(has3))