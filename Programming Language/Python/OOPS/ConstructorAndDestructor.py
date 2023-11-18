#ConstructorAndDestructor
class data :
  def __init__(self, k=0, l=0) :
    self.__i=k;
    self.__j=l;
    print(f"Inside the Constructor of the object {self}")
  def display(self) :
    print(f"The value of i is {self.__i}")
    print(f"The value of j is {self.__j}")
  def __del__(self) :
    print(f"Inside the Destructor of the object {self}")

d1=data()
d2=data(10, 5)
d1.display()
d2.display()

del d1
del d2