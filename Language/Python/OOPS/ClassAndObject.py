#ClassAndObject
class Data :
  amt=12.34

  def __init__(self, id=0) :
    self.id=id
  def __del__(self) :
    pass

  def getId(self) :
    return self.id
  def setId(self, id) :
    self.id=id
  def getAmt() :
    return Data.amt

obj1=Data()
obj1.setId(56);
print(obj1.id, obj1.getId())

obj2=Data(78)
print(obj2.id, obj2.getId())

print(Data.amt, Data.getAmt())
print(vars(obj1), isinstance(obj2, Data))