//Async
let func1=()=> {
    let promise=new Promise(function(resolve, reject) {
        let x=5;
        if(x)
        resolve("Promise is resolved");
        else
        reject("Promise is rejected");
    })
    promise.then(
        function(value) {console.log(value)},
        function(error) {console.log(error)}
    )
    return promise;
}

let func2=async()=> {
    try {
        let value=await func1();
        console.log(value);
    }
    catch(error) {
        console.log(error);
    }
}
func2();