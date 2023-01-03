#Tuple
T=(10, 20, 30, 40, 50, 60, 70, 80, 90)
print(T[1], T[-1])
print(T[:3], T[3:], T[1:4:1])

T=(10, 20, 30, 40, 50, 60, 70, 80, 90)
for i in T :
  print(i, end=' ')

T=(10, 20, 30, 40, 50, 60, 70, 80, 90)
print(T*3)
print(10 in T)
print(10 not in T)

T1=(1, 2, 3, 4, 5)
T2=(1, 2, 3, *T1, 4, 5)
print(T2)

T1=(1, 2, 3, 4, 5)
T2=T1
print(T1 is T2)

T1=(1, 2, 3, 4, 5)
T2=()+T1
print(T1 is T2)

T=(1, 2, 0, 4, 5)
print(len(T))
print(max(T), min(T))
print(all(T), any(T))
print(sum(T))

T=(1, 2, 0, 4, 5)
print(T.count(0), T.index(0))

T=(3, 5, 1, 4, 2)
print(tuple(sorted(T)))
print(tuple(reversed(T)))