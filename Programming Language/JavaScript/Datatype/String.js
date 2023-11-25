//String
let x, y, s, r;
x='hello';
y="world";
console.log(x, y);

s="sudeep";
console.log(s.length);

console.log(s.includes("ee"), s.indexOf("ee"), s.lastIndexOf("ee"), s.search("ee"));
console.log(s.startsWith("su"), s.endsWith("su"));

console.log(s.charAt(1), s.charCodeAt(1));
console.log(s.substring(1, 5), s.slice(-5, -1));

console.log(s.replace("ee", "i"), s.replaceAll("ee", "i"));
console.log(s.toUpperCase(), s.toLowerCase());
console.log(s.concat(" ", "kumar"));

console.log(s.padStart(10, 'x'), s.padEnd(10, 'x'));
s="  sudeep  ";
console.log(s.trim(), s.trimStart(), s.trimEnd());

s="sudeep kumar srivastava";
console.log(s.split(' '));

r=`${x} ${y==="World" ? y : null}`;
console.log(r);