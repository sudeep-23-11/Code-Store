//Set
let S=new Set([1, 2, 3, 4, 5]);
S.delete(3)
S.add(3);

console.log(S.size, S.has(3));

console.log(S.values());
S.clear();