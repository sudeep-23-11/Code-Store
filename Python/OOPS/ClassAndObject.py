#ClassAndObject
class rectangle :
  count=0

  def setdata(self, l, b) :
    self.__len=l
    self.__bre=b
  def getdata(self) :
    self.__len, self.__bre=[int(n) for n in input().split()]
  def displaydata(self) :
    rectangle.count+=1
    print(f"{rectangle.count} : {self.__len} {self.__bre}")
  def area(self) :
    area=self.__len*self.__bre
    print(area)
  def peri(self) :
    peri=(self.__len+self.__bre)*2
    print(peri)

  def resetcount() :
    count=0

r1=rectangle()
r2=rectangle()
r1.setdata(22.44, 33.66)
r1.displaydata()
r1.area()
r1.peri()
r2.getdata()
r2.displaydata()
r2.area()
r2.peri()

print(vars(rectangle))
print(vars(r1))
print(vars(r2))

print(dir(rectangle))
print(dir(r1))
print(dir(r2))

print(rectangle.count)
rectangle.resetcount()

print(isinstance(r1, rectangle))
print(isinstance(r2, rectangle))