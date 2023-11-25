//Map
let M=new Map([["Sudeep", 1], ["Aryan", 2], ["Shivam", 3], ["Jatin", 4], ["Anshuman", 6]]);
M.delete("Shivam");
M.set("Shivam", 3);
M.set("Anshuman", 5);

console.log(M.size, M.has("Shivam"), M.get("Shivam"));

console.log(M.keys());
console.log(M.values());
console.log(M.entries());
M.clear();