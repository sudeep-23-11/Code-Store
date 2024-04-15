#Dictionary
D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
print(D.keys())
print(D.values())
print(D.items())

D["Shivam"]=0
print(D)

print("Sudeep" in D)
print("Sudeep" not in D)

D1={"Yash":6, "Piyush":7, **D, "Rahul":8, "Sudeep":1, "Aryan":2}
print(D1)

D1=D
print(D is D1)

print(len(D))
print(max(D), min(D))
print(all(D), any(D))

del(D["Anshuman"])
D["Yash"]=6
print(D)