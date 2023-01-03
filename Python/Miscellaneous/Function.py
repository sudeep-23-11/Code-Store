#Function
def fun(i, f, c, s) :
  print(i+f)
  print(c+s)
fun(33, 0.66, 'S', "udeep")
fun(c='S', i=33, s="udeep", f=0.66)

def fun(*T) :
  for i in T :
    print(i, end=' ')
  print()
fun(33)
fun(33, 0.66)
fun(33, 0.66, 'S')
fun(33, 0.66, 'S', "udeep")

def fun(**D) :
  for k, v in D.items() :
    print(k, ':', v, end=' ')
  print()
fun(i=33)
fun(i=33, f=0.66)
fun(i=33, f=0.66, c='S')
fun(i=33, f=0.66, c='S', s="udeep")

def fun(i, f, c, s) :
  print(i+f)
  print(c+s)
T=(33, 0.66, 'S', "udeep")
fun(*T)
D={'c':'S', 'i':33, 's':"udeep", 'f':0.66}
fun(**D)

def square(n) :
  "Calculating the square of a number"
  sq=n**2
  return sq
print(square(5))
print(square.__doc__)

cube=lambda n : n**3
print(cube(5))

x=2
def fun() :
  global y
  y=3
  print(x, y)
fun()
print(x, y)

def fun() :
  print("Hello, World!")
def twice(f) :
  f()
  f()
twice(fun)