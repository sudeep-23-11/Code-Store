//Date
let D1=new Date("November 23 2000 23:23:50");
console.log(D1.toString(), D1.toUTCString(), D1.toISOString());
let D2=new Date(2000, 10, 23, 23, 50, 50, 50);
console.log(D2.toDateString(), D2.toTimeString());
let D3=new Date(975002030000);
console.log(D3.toLocaleString(), D3.toLocaleDateString(), D3.toLocaleTimeString());

console.log(Date.parse("November 23 2000 23:23:50"));
console.log(Date.parse("11/23/2000 23:23:50"));
console.log(Date.parse("2000-11-23T23:23:50+05:30"));

let D=new Date();
D.setFullYear(2000);
D.setMonth(10);
D.setDate(23);
D.setHours(23);
D.setMinutes(50);
D.setSeconds(50);
D.setMilliseconds(50);
D.setHours(23);
console.log(D.getFullYear(), D.getMonth(), D.getDate(), D.getDay());
console.log(D.getHours(), D.getMinutes(), D.getSeconds(), D.getMilliseconds());

console.log(D.getUTCFullYear(), D.getUTCMonth(), D.getUTCDate(), D.getUTCDay());
console.log(D.getUTCHours(), D.getUTCMinutes(), D.getUTCSeconds(), D.getUTCMilliseconds());
console.log(D.getTimezoneOffset())

D.setTime(975002030000);
console.log(D.getTime(), Date.now());