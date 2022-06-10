//Map
let M=new Map([["Sudeep", 10], ["Aryan", 20], ["Shivam", 25], ["Jatin", 40], ["Anshuman", 50]]);
M.delete("Anshuman");
M.set("Yash", 50);
M.set("Shivam", 30);
console.log(M.has("Anshuman"), M.get("Yash"));
console.log(M.size);
for(let i of M.keys())
console.log(i);
for(let i of M.values())
console.log(i);
for(let i of M.entries())
console.log(i);
M.clear();