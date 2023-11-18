#FileInputOutput
CP="Data Structures, Algorithms for Competitive Programming\n"
AI="Data Science, Machine Learning, Deep Learning in Artificial Intelligence\n"
WD="HTML, CSS, JavaScript, Bootstrap, ReactJS, NodeJS, ExpressJS, MongoDB in Full Stack Web Development\n"
AD="Kotlin, Java in Native Android, Dart in Flutter, JavaScript in React Native for Mobile App Development\n"
Languages=["C\n", "C++\n", "Python\n", "SQL\n", "HTML\n", "CSS\n", "JavaScript\n", "Java\n", "Kotlin\n", "Dart\n"]

f=open("demo1.txt", 'w')
f.write(CP)
f.write(AI)
f.close()

f=open("demo1.txt", 'a')
f.write(WD)
f.write(AD)
f.close()

f=open("demo1.txt", 'r')
data=f.read()
print(data)
f.close()

f=open("demo1.txt")
while 1 :
  data=f.readline()
  if data=='' :
    break
  print(data, end='')
f.close()

try :
  f=open("demo2.txt", 'x')
  f.write("Hello, World!\n")
finally :
  f.close()

f=open("demo2.txt", 'r')
print(f.tell())
print(f.read(5))
print(f.tell())
f.seek(7, 0)
print(f.tell())
print(f.read(5))
print(f.tell())
f.seek(0, 2)
print(f.tell())
f.close()

with open("demo3.txt", 'w') as f :
  f.writelines(Languages)
with open("demo3.txt", 'r') as f :
  print(f.readlines())