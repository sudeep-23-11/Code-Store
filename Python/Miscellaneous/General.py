#General
import copy

a=complex(3, 6)
b=bool(100)
c=chr(33)
d=ord('A')
e=str(66.99)
print(a, b, c, d, e)
print(type(a), type(b), type(c), type(d), type(e))

a=[1, 2, 3]
b=a
c=copy.copy(a)
d=copy.deepcopy(a)
a[1]=4
print(id(a), id(b), id(c), id(d))
print(a[1], b[1], c[1], d[1])

x=3**2
y=3//2
print(x, y)
print(bin(100), oct(100), hex(100))

x=abs(-5)
y=min(1, 2, 3, 4, 5)
z=max(1, 2, 3, 4, 5)
print(x, y, z)

x=int(input())
if x%2==0 and x%3==0 :
  print("Multiple of 6")
elif x%2==0 or x%3==0 :
  print("Either Multiple of 2 or 3")
else :
  print("Neither Multiple of 2 nor 3")

a, b=3, 8
print(all((a>5, b>5)))
print(any((a>5, b>5)))

print(not 100)
ch='A'
print(ch is 'a')
print(ch is not 'a')

for i in range(1, 11, 1) :
  print(i, end=' ')
i+=1
while i<20 :
  print(i, end=' ')
  i+=1
else :
  print('20')