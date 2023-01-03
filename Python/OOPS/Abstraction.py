#Abstraction
from abc import ABC
from abc import abstractmethod

class Parent(ABC) :
  @abstractmethod
  def receivedata(self) :
    pass
  @abstractmethod
  def senddata(self) :
    pass

class Child(Parent) :
  def receivedata(self) :
    self._data=int(input())
  def senddata(self) :
    return self._data

c=Child()
c.receivedata()
print(c.senddata())