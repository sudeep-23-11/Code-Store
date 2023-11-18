#Set
S={*range(10, 100, 10)}
print(10 in S)
print(10 not in S)

S={*range(1, 6, 1)}
S1={6, 7, 8, *S, 9, 10}
print(S1)

S1=S
print(S is S1)

print(len(S))
print(max(S), min(S))
print(all(S), any(S))
print(sum(S))

S={*range(1, 6, 1)}
S.remove(3)
S.add(0)
print(S)
S.clear()
print(S)

S1={*range(1, 11, 1)}
S2={*range(1, 6, 1)}
print(S1.issuperset(S2))
print(S1.issubset(S2))
print(S1.isdisjoint(S2))

S1={"Sudeep", "Aryan", "Shivam", "Jatin", "Anshuman"}
S2={"Yash", "Piyush", "Rahul", "Sudeep", "Aryan"}
print(S1|S2)
print(S1&S2)
print(S1-S2)
print(S2-S1)
print(S1^S2)