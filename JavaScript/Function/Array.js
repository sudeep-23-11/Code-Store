//Array
let A1=[0, 20, 30, 45, 60, 70, 90];
let t=0;
A1.forEach(F1=(i)=> {
    t+=i;
});
console.log(t);
let A2=A1.map(F2=(i)=> {
    return (i*2);
});
console.log(A2);
let A3=A1.filter(F3=(i)=> {
    return (i>45);
});
console.log(A3);
let A4=A1.reduce(F4=(t, i)=> {
    return (t+=i);
});
console.log(A4);
let A5=A1.reduceRight(F5=(t, i)=> {
    return (t+=i);
});
console.log(A5);
let A6=A1.every(F6=(i)=> {
    return (i>45);
});
console.log(A6);
let A7=A1.some(F7=(i)=> {
    return (i>45);
});
console.log(A7);
let A8=A1.find(F8=(i)=> {
    return (i>45);
});
console.log(A8);
let A9=A1.findIndex(F9=(i)=> {
    return (i>45);
});
console.log(A9);