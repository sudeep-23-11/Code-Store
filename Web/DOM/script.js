let func1 = () => {
    let cn = document.getElementsByClassName("E");
    for(let i=0;i<cn.length;i++)
    cn[i].style.color="#FFFFFF";

    let tn = document.getElementsByTagName("p");
    for(let i=0;i<tn.length;i++)
    tn[i].style.width="100px";
}

let func2 = () => {
    alert("Web");
    document.write("Web");
}

let func3 = () => {
    document.querySelector("#B").innerHTML="CSS";
    document.querySelector(".C").src="../public/css.png";

    document.getElementById("A").reset();
    document.getElementById("D").disabled=false;
}

let func4 = () => {
    document.title = "Web";
    document.body.style.color="#FF0000";

    document.getElementById("D").removeEventListener("click", func4);
    clearInterval(si);
    clearTimeout(st);
}

document.getElementById("D").addEventListener("click", func4);
let si = setInterval(() => console.log("Interval"), 5000);
let st = setTimeout(() => console.log("Timeout"), 25000);