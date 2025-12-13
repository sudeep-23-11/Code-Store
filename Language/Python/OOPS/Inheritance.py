#Inheritance
class C1 :
  def _setX(self, x) :
    self._x=x

  def __setY(self, y) :
    self.__y=y

  def mainY(self) :
    self.__setY(2)
    print(self.__y)

  def __init__(self, k) :
    print(k*2)
  a=2.3
  def display(self) :
    print(C1.a)
class C2 :
  def sum(self, *args) :
    if len(args) == 1 :
      print(args[0])
    elif isinstance(args[0], int) :
      print((args[0]+args[1]))
    else :
      print((args[0]+args[1]))

  def __init__(self, s="") :
    self.s=s
  def __add__(self, other) :
    res=C2()
    res.s=self.s+" "+other.s
    return res
  def __sub__(self, other) :
    res=C2()
    res.s=other.s+" "+self.s
    return res
class C3(C1) :
  def mainX(self) :
    self._setX(3)
    print(self._x)

  def __init__(self, k) :
    super().__init__(k)
    print(k*3)
  a=4.6
  def display(self):
    super().display()
    print(super().a, C3.a)

obj1=C1(10)
obj2=C2()
obj3=C3(10)

obj3.mainX()
obj3.mainY()
print(issubclass(C3, C1))

obj2.sum('x')
obj2.sum(2, 3)
obj2.sum(2.3, 4.6)
obj1.display()
obj3.display()

obj4=C2("abc")
obj5=C2("xyz")
obj6=C2()
obj6=obj4+obj5
print(obj6.s)
obj6=obj4-obj5
print(obj6.s)