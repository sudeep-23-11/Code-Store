#Tuple
T=(10, 20, 30, 40, 50, 60, 70, 80, 90)
print(T[1], T[-1])
print(T[:3], T[3:], T[1:4:1])

print(T*3)
print(10 in T)
print(10 not in T)

T=(1, 2, 3, 4, 5)
T1=(1, 2, 3, *T, 4, 5)
print(T1)

T1=T
print(T is T1)
T2=()+T
print(T is T2)

print(len(T))
print(max(T), min(T))
print(all(T), any(T))
print(sum(T))

print(T.index(1), T.count(1))