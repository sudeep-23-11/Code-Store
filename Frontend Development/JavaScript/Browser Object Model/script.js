let func=()=> {
    console.log("Hello World");
}
let si=window.setInterval(func, 2000);
let st=window.setTimeout(func, 10000);

let func1=()=> {
    console.log(window.name, window.length, window.closed);
    console.log(window.innerHeight, window.innerWidth);
    console.log(window.outerHeight, window.outerWidth);
    console.log(window.self, window.parent, window.top);

    // w=window.open("https://www.youtube.com/", "YouTube", "width=500,height=500");
    // w.blur();
    // w.focus();
    // w.moveBy(100, 100);
    // w.moveTo(100, 100);
    // w.resizeBy(1000, 1000);
    // w.resizeTo(1000, 1000);
    // w.scrollBy(100, 100);
    // w.scrollTo(100, 100);
    // w.stop();
    // w.print();
    // w.close();

    window.clearInterval(si);
    window.clearTimeout(st);
}

let func2=()=> {
    window.alert("Screen");
    console.log(screen.height, screen.width);
    console.log(screen.availHeight, screen.availWidth);
    console.log(screen.colorDepth, screen.pixelDepth);
}

let func3=()=> {
    let c=window.confirm("Location");
    if(c===true)
    {
        console.log(location.href);
        console.log(location.protocol, location.pathname);
        console.log(location.host, location.hostname, location.port);
        console.log(location.hash, location.search, location.origin);

        // location.assign("https://www.youtube.com/");
        // location.reload();
        // location.replace("https://www.youtube.com/");
    }
}

let func4=()=> {
    let p=window.prompt("History");
    if(p==="hello")
    {
        console.log(history.length);

        // history.back();
        // history.forward();
        // history.go(-2);
    }
}