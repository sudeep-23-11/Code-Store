#FileInputOutput
front="HTML, CSS, Bootstrap, Tailwind CSS, React.js, Next.js\n"
back="Node.js, Express.js, Rest API, MySQL, MongoDB\n"
pl=["C\n", "C++\n", "Python\n", "JavaScript\n", "TypeScript\n"]

f=open("demo1.txt", 'w')
f.write(front)
f.close()

f=open("demo1.txt", 'a')
f.write(back)
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
  f.writelines(pl)
with open("demo3.txt", 'r') as f :
  print(f.readlines())