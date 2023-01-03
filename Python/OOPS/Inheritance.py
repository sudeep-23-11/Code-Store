#Inheritance
class Parent :
  def _sum(self) :
    s=self._i+self._j
    return s
  def _diff(self) :
    if self._i>=self._j :
      d=self._i-self._j
    else :
      d=self._j-self._i
    return d

  def __init__(self, x=0, y=0) :
    self._i=x;
    self._j=y
  def display(self) :
    print("This function is adding and subtracting two numbers")
    print(f"{self._i} {self._j}")
  def AS(self) :
    print(f"{self._sum()} {self._diff()}")

class Child(Parent) :
  def _pro(self) :
    p=self.__k*self.__l
    return p
  def _quo(self) :
    if self.__k>=self.__l :
      q=self.__k/self.__l
    else :
      q=self.__l/self.__k
    return q

  def __init__(self, x=0, y=0) :
    super().__init__(x, y)
    self.__k=x
    self.__l=y
  def display(self) :
    print("This function is adding, subtracting, multiplying and dividing two numbers")
    print(f"{self.__k} {self.__l}")
  def ASMD(self) :
    print(f"{self._sum()} {self._diff()}")
    print(f"{self._pro()} {self._quo()}")

p=Parent(22.44, 33.66)
c=Child(22.44, 33.66)
p.display()
p.AS()
c.display()
c.ASMD()

print(issubclass(Child, Parent))