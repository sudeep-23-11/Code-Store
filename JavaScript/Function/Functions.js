//Functions
function print(i, j, k)
{
    for(let i of arguments)
    console.log(i);
}
print(2, 3, 5);
console.log(print.toString());
let square=function(n) {return n**2};
console.log(square(5));
let cube=(n)=> {
    let cb;
    cb=n**3;
    return cb;
}
console.log(cube(5));