#FileHandling
import os
import shutil

f=open("test1.txt", 'w')
f.write("Sudeep Kumar Srivastava")
f.close()

os.rename("test1.txt", "test2.txt")

f=open("test2.txt", 'r')
print(f.read())
f.close()

os.remove("test2.txt")

os.getcwd()

os.mkdir("test1")
os.mkdir("test2")

os.listdir()

os.chdir("./test1")

f=open("test1.txt", 'w')
f.write("Sudeep Kumar Srivastava")
f.close()
os.chdir("./..")

os.rmdir("test2")

shutil.rmtree("test1")