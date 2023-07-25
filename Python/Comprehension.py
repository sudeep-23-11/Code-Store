#Comprehension
L1=[(n, n**2) for n in range(10, 100, 10)]
print(L1)
L2=[n if n<30 or n>60 else 0 for n in range(10, 100, 10)]
print(L2)

S1={(n, n**2) for n in range(10, 100, 10)}
print(S1)
S2={n if n<30 or n>60 else 0 for n in range(10, 100, 10)}
print(S2)

D={"Sudeep":1, "Aryan":2, "Shivam":3, "Jatin":4, "Anshuman":5}
D1={k:v**2 for (k, v) in D.items()}
print(D1)
D2={k:v if v<3 or v>4 else 0 for (k, v) in D.items()}
print(D2)