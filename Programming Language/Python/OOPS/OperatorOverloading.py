#OperatorOverloading
class complex :
  def setdata(self, r, i) :
    self.__real=r
    self.__imag=i
  def getdata(self) :
    self.__real, self.__imag=[int(n) for n in input().split()]
  def displaydata(self) :
    print(f"{self.__real} {self.__imag}")
  def __add__(self, other) :
    t=complex()
    t.__real=self.__real+other.__real
    t.__imag=self.__imag+other.__imag
    return t
  def __sub__(self, other) :
    t=complex()
    t.__real=self.__real-other.__real
    t.__imag=self.__imag-other.__imag
    return t

a=complex()
b=complex()
c=complex()
d=complex()
a.setdata(33.66, 66.33)
a.displaydata()
b.getdata()
b.displaydata()
c=a+b
c.displaydata()
d=a-b
d.displaydata()