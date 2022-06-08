let form_button_1=()=> {
    console.log("Hello JavaScript");
    document.write("Hello JavaScript");
    document.title="Hello JavaScript";
    document.body.style.color="#FF0000";
}

let form_button_2=()=> {
    let i=document.getElementById("Ac");
    i.value=i.value.toUpperCase();
}

let timer=()=> {
    window.alert("Bruh...");
}
let si=setInterval(timer, 2000);
let st=setTimeout(timer, 10000);

let click_button_1=()=> {
    let c=window.confirm("Hello CSS");
    if(c===true)
    {
        document.getElementById("Aa").innerHTML="Hello CSS";
        let cn=document.getElementsByClassName("Ba");
        for(let i=0;i<cn.length;i++)
        cn[i].style.backgroundColor="#00FF00";
        clearInterval(si);
        document.getElementById("btn").disabled=false;
    }
}

let click_button_2=()=> {
    let p=window.prompt("Hello JavaScript");
    if(p==="hello")
    {
        document.querySelector("#Ab").src="../../Media/images/css.png";
        let tn=document.getElementsByTagName("p");
        for(let i=0;i<tn.length;i++)
        tn[i].style.backgroundColor="#0000FF";
        document.getElementById("btn").removeEventListener("click", click_button_2);
        clearTimeout(st);
    }
}
document.getElementById("btn").addEventListener("click", click_button_2);