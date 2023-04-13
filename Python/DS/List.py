#List
L=[*range(10, 100, 10)]
print(L[1], L[-1])
print(L[:3], L[3:], L[1:4:1])

L[2]=200
L[-2]=900
print(L)

print(L*3)
print(10 in L)
print(10 not in L)

L=[*range(1, 6, 1)]
L1=[1, 2, 3, *L, 4, 5]
print(L1)

L1=L
print(L is L1)
L2=[]+L
print(L is L2)

print(len(L))
print(max(L), min(L))
print(all(L), any(L))
print(sum(L))

L.remove(3)
L.insert(2, 0)
print(L.index(1), L.count(1))
print(L)

L=[3, 5, 1, 4, 2]
L.append(0)
L.extend([6, 7])
L.sort()
L.reverse()
print(L)