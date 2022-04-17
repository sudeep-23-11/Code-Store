//Strings
let x, y, S, str;
x='Hello';
y="World";
console.log(x, y);
S="Sudeep";
console.log(S.length);
console.log(S[1], S.charAt(1), S.charCodeAt(1));
console.log(S.indexOf('e'), S.lastIndexOf('e'));
console.log(S.slice(-5, -1), S.substring(1, 5), S.substr(1, 4));
console.log(S.includes('d'),  S.search('d'), S.replace("ee", "i"));
console.log(S.startsWith('s'), S.endsWith('s'));
console.log(S.toUpperCase(), S.toLowerCase());
console.log(S.concat(" ", "Kumar"));
S="  Sudeep  ";
console.log(S.trim());
S="X";
console.log(S.padStart(2, ' '), S.padEnd(2, ' '));
S="Sudeep Kumar Srivastava";
for(let i of S.split(' '))
console.log(i);
str=`${x}
${y==="World" ? y : null}`;
console.log(str);