#MultipleInheritance
class ParentA :
  def __init__(self, x=0, y=0) :
    print("Inside the ParentA Constructor")
    self._i=x
    self._j=y
  def sum(self) :
    self._s=self._i+self._j
  def display(self) :
    print(self._s)

class ParentB :
  def __init__(self, x=0, y=0) :
    print("Inside the ParentB Constructor")
    self._i=x
    self._j=y
  def diff(self) :
    if self._i>=self._j :
      self._d=self._i-self._j
    else :
      self._d=self._j-self._i
  def display(self) :
    print(self._d)

class ChildA(ParentA, ParentB) :
  def __init__(self, x=0, y=0) :
    ParentA.__init__(self, x, y)
    ParentB.__init__(self, x, y)
    print("Inside the ChildA Constructor")

c1=ChildA(22.44, 33.66)
c1.sum()
c1.diff()
c1.display()

class ChildB(ParentB, ParentA) :
  def __init__(self, x=0, y=0) :
    ParentA.__init__(self, x, y)
    ParentB.__init__(self, x, y)
    print("Inside the ChildB Constructor")

c2=ChildB(22.44, 33.66)
c2.sum()
c2.diff()
c2.display()