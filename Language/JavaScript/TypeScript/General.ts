//General
const x: boolean=true;
const y: number=10;
const z: string='sudeep';
console.log(x, y, z);

let obj: {name: string, iq: number}={
    name: 'sudeep',
    iq: 100
};
console.log(obj);

let A: number[]=[1, 2, 3, 4, 5];
console.log(A);

let sum=(a: number, b: number): number => {
    let c=a+b;
    return c;
}
console.log(sum(2, 3));

// npm install -g ts-node