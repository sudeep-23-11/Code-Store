#List
L=[*range(10, 100, 10)]
print(L[1], L[-1])
print(L[:3], L[3:], L[1:4:1])

L=[*range(10, 100, 10)]
for i in L :
  print(i, end=' ')
print()
L[2]=200
L[-2]=900
print(L)

L=[*range(10, 100, 10)]
print(L*3)
print(10 in L)
print(10 not in L)

L1=[*range(1, 6, 1)]
L2=[1, 2, 3, *L1, 4, 5]
print(L2)

L1=[*range(1, 6, 1)]
L2=L1
L2[2]=0
print(L1)
print(L2)
print(L1 is L2)

L1=[*range(1, 6, 1)]
L2=[]+L1
L2[2]=0
print(L1)
print(L2)
print(L1 is L2)

L=[1, 2, 0, 4, 5]
print(len(L))
print(max(L), min(L))
print(all(L), any(L))
print(sum(L))

L=[*range(1, 6, 1)]
L.remove(3)
L.insert(2, 0)
print(L.count(0), L.index(0))
print(L)

L=[3, 5, 1, 4, 2]
print(list(sorted(L)))
print(list(reversed(L)))