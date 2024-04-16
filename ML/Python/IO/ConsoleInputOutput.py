#ConsoleInputOutput
print('Sudeep said, "Hello, World!"')
print("Sudeep said, \"Hello, World!\"")
print("Hello\nWorld")
print(r"Hello\nWorld")

a, b, c=input("Enter your full name ").split()
print(a, b, c)
a, b, c=[int(n) for n in input("Enter the numbers ").split()]
print((a*2), (b*3), (c*5))

elements=input("Enter the elements ").split()
i=int(elements[0])
f=float(elements[1])
c=elements[2]
s=elements[3]
print(i+f)
print(c+s)

elements=[int(n) for n in input("Enter the numbers ").split()]
for i, v in enumerate(elements) :
  print(i, v, sep='->')

l=99
b=66
w=33
print("Length is", l, "metres, Width is", b, "metres and Height is", w, "metres")
print(f"Length is {l} metres, Width is {b} metres and Height is {w} metres")
print("Length is {0} metres, Width is {1} metres and Height is {2} metres".format(99, 66, 33))
print("Length is {l} metres, Width is {b} metres and Height is {w} metres".format(l=99, b=66, w=33))