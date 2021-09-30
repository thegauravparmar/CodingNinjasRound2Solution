num = int(input("Enter a number "))
c = 0
bits = 1 << 6
while(bits > 0):
  if((num & bits)!=0):
    c = (c*10) + 1
  else:
      c = (c*10) + 0
  bits=bits//2
for n in range(1,8):
 d = c % 10
 c = c // 10
 if(d == 1 and n == 1):
   print('Violet')
 elif(d == 1 and n == 2):
     print('Indigo')
 elif(d == 1 and n == 3):
   print('Blue')
 elif(d == 1 and n == 4):
     print('Green')
 elif(d == 1 and n == 5):
       print('Yellow')
 elif(d == 1 and n == 6):
   print('Orange')
 elif(d == 1 and n == 7):
   print('Red')
