//ExceptionHandling
let checkAge=(age)=> {
    if (age<0)
    throw new Error("negative age not allowed");
    else if (age<18)
    console.log("under age");
    else
    console.log("legal adult");
}

try {
    checkAge(21);
    checkAge(11);
    checkAge(-1);
}
catch (e) {
    console.log(e);
}
finally {
    console.log("checking done");
}