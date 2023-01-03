#Dictionary
D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
print(D.keys())
print(D.values())
print(D.items())

D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
for k, v in D.items() :
  print(k, v, sep=':', end=' ')

D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
print("Sudeep" in D)
print("Sudeep" not in D)

D1={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
D2={"Yash":6, "Piyush":7, **D1, "Rahul":8, "Sudeep":1, "Aryan":2}
print(D2)

D1={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
D2=D1
D2["Shivam"]=0
print(D1)
print(D2)
print(D1 is D2)

D={1:"Sudeep", 2:"Aryan", 0:"Shivam", 4:"Jatin", 5:"Anshuman"}
print(len(D))
print(max(D), min(D))
print(all(D), any(D))
print(sum(D))

D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
del(D["Anshuman"])
D["Yash"]=6
D["Shivam"]=0
print(D)

D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
for k, v in sorted(D.items()) :
  print(k, v, sep=':', end=' ')