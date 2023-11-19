let func = () => {
    console.log("Hello World");
}

let func1 = () => {
    document.write("Hello JavaScript");
    document.title = "Hello JavaScript";
    document.body.style.color="#FF0000";
}

let func2 = () => {
    let i = document.getElementById("Ac");
    i.value = i.value.toUpperCase();
}

let func3 = () => {
    document.getElementById("Aa").innerHTML="Hello CSS";
    let cn = document.getElementsByClassName("Ba");
    for(let i=0;i<cn.length;i++)
    cn[i].style.backgroundColor="#00FF00";
    document.getElementById("btn").disabled=false;
}

let func4 = () => {
    document.querySelector("#Ab").src="../public/css.png";
    let tn = document.getElementsByTagName("p");
    for(let i=0;i<tn.length;i++)
    tn[i].style.backgroundColor="#0000FF";
    document.getElementById("btn").removeEventListener("click", func4);
}
document.getElementById("btn").addEventListener("click", func4);