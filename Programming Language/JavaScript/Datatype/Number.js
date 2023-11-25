//Number
let x, y, z;
x=10;
console.log(Number.isInteger(x), Number.isSafeInteger(x), x.valueOf());
console.log(x.toString(2), x.toString(8), x.toString(10), x.toString(16));

y=12.3456;
console.log(y.toExponential(3), y.toFixed(3), y.toPrecision(3));

z="12.3456";
console.log(Number(z), parseInt(z), parseFloat(z));