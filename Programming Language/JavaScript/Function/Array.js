//Array
let A1=[0, 20, 30, 45, 60, 70, 90];
let t=0;
A1.forEach((i) => {
    t+=i;
});
console.log(t);
let A2=A1.map((i) => {
    return i*2;
});
console.log(A2);
let A3=A1.filter((i) => {
    return i>45;
});
console.log(A3);
let A4=A1.reduce((t, i) => {
    return t+=i;
});
console.log(A4);
let A5=A1.reduceRight((t, i) => {
    return t+=i;
});
console.log(A5);
let A6=A1.every((i) => {
    return i>45;
});
console.log(A6);
let A7=A1.some((i) => {
    return i>45;
});
console.log(A7);
let A8=A1.find((i) => {
    return i>45;
});
console.log(A8);
let A9=A1.findIndex((i) => {
    return i>45;
});
console.log(A9);