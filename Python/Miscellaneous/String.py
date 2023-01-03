#String
A='Hello'
B="World"
C='''Sudeep Kumar
Srivastava'''
print(A, B, C, sep=', ', end='!')

S="Sudeep"
print(S[1], S[-1])
print(S[:3], S[3:], S[1:4:1])

S="Sudeep"
for i in S :
  print(i, end='')

S="Sudeep"
print(S*3)
print('S' in S)
print('S' not in S)

S1="Sudeep"
S2=S1
print(S1 is S2)

S1="Sudeep"
S2=''+S1
print(S1 is S2)

S="Sudeep"
print(len(S))
print(max(S), min(S))
print(S.find('d'))
print(S.replace('ee', 'i'))

S="sudeep"
print(S.isalpha(), S.isdigit(), S.isalnum())
print(S.startswith('s'), S.endswith('s'))
print(S.upper(), S.isupper())
print(S.lower(), S.islower())
print(S.title(), S.capitalize(), S.swapcase())

S="  Sudeep  "
print(S.lstrip())
print(S.rstrip())
print(S.strip())

S="Sudeep Kumar Srivastava"
print('-'.join(S))
print(S.split(' '))
print(S.partition("Kumar"))

S1="Sudeep"
L=list(S1)
L.sort()
S2=''
print(S2.join(L))

S1="Sudeep"
L=list(S1)
L.reverse()
S2=''
print(S2.join(L))