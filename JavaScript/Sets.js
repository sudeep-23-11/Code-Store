//Sets
let S=new Set([10, 20, 25, 40, 50]);
S.delete(25)
S.add(30);
console.log(S.has(25));
console.log(S.size);
for(let i of S.values())
console.log(i);
S.clear();