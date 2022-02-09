let form_button_1=()=> {
    console.log("Hello JavScript");
    document.write("Hello JavaScript");
}

let form_button_2=()=> {
    let x=document.getElementById("Ac");
    x.value=x.value.toUpperCase();
}

let click_button_1=()=> {
    document.getElementById("Aa").innerHTML="Hello CSS";
    let CN=document.getElementsByClassName("Ba");
    for(let i=0;i<CN.length;i++)
    CN[i].style.backgroundColor="#00FF00";
}

let click_button_2=()=> {
    document.querySelector("#Ab").src="../images/css.png";
    let TN=document.getElementsByTagName("p");
    for(let i=0;i<TN.length;i++)
    TN[i].style.backgroundColor="#0000FF";
    document.getElementById("btn").removeEventListener("click", click_button_2);
}
document.getElementById("btn").addEventListener("click", click_button_2);