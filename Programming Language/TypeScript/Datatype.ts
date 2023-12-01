//Datatype
let s: boolean|number|string;
s=true;
console.log(s);
s=10;
console.log(s);
s='sudeep';
console.log(s);

let T: [boolean, number, string]=[true, 10, 'sudeep'];
console.log(T);

interface data {
    name: string,
    iq: number
}
let obj: data={
    name: 'sudeep',
    iq: 100
};
console.log(obj);

enum color {red, blue, green}
const x: color=color.red;
const y: color=color.blue;
const z: color=color.green;
console.log(x, y, z);