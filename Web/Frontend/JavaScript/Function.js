//Function
function print(i, j, k) {console.log(arguments)}
print(2, 3, 5);
console.log(print.toString());

let square=function(n) {return n**2}
console.log(square(5));

let cube=(n) => {return n**3}
console.log(cube(5));

let counter=()=> {
    let count=0;
    let increment=()=> {
        count++;
        return count;
    }
    return increment;
}
let c=counter();
console.log(c());
console.log(c());