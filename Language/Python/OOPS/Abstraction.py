#Abstraction
from abc import ABC, abstractmethod
class C1(ABC) :
  @abstractmethod
  def print(self) :
    pass
class C2(C1) :
  def print(self) :
    print("Hello ML")
class C3(C1) :
  def print(self) :
    print("Hello DL")
class C4(C2, C3) :
  pass
class C5(C3, C2) :
  pass

obj1=C4()
obj1.print()
obj2=C5()
obj2.print()