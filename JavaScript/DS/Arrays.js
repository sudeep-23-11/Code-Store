//Arrays
let A=[0, 20, 30, 45, 60, 70, 90];
A.pop();
A.push(80);
A.shift();
A.unshift(10);
A.splice(3, 1, 40, 50);
console.log(Array.isArray(A), A.length);
console.log(A[1]);
console.log(A.indexOf(70), A.lastIndexOf(70));
console.log(A.slice(3, 7));
console.log(A.includes(50));
console.log(A.join(','));
console.log(Array.from("Sudeep"));
let x=[10, 20, 30];
let y=[40, 50, 60];
console.log(x.concat(y));
for(let i of A.keys())
console.log(i);