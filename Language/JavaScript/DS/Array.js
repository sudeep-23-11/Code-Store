//Array
let A=[1, 2, 5];
console.log(Array.isArray(A), A.length);

console.log(A.pop(), A.shift())
A.push(5);
A.unshift(1);
A.splice(2, 0, 3, 4);

console.log(A.includes(3), A.indexOf(3), A.lastIndexOf(3));
console.log(A.slice(1, 3), A.slice(-4, -2));

console.log(A.toString(), A.join(' '));
console.log(Array.from("sudeep"));

A.forEach((i) => console.log(i))
console.log(A.map((i) => {return i*2}));
console.log(A.flatMap((i) => {return [i*2, i*3]}));
console.log(A.filter((i) => {return i>3}));
console.log(A.reduce((t, i) => {return t+=i}));
console.log(A.reduceRight((t, i) => {return t+=i}));
console.log(A.every((i) => {return i>3}));
console.log(A.some((i) => {return i>3}));
console.log(A.find((i) => {return i>3}));
console.log(A.findIndex((i) => {return i>3}));

let x=[1, 2, 3];
let y=[4, 5];
console.log(x.concat(y));
let z=[[1,2],[3,4]];
console.log(z.flat());

A.sort();
A.reverse();
console.log(A);

for(let i in A)
console.log(A[i]);
for(let i of A)
console.log(i);