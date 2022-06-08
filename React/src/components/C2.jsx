//State in RFC
//Forms in React

import React, {useState} from "react";

export default function C2() {

    let submit=(event)=> {
        event.preventDefault();
    }
    let change=(event)=> {
        setText(event.target.value);
    }
    
    const [text, setText]=useState("Enter the text");
    let click1=()=> {
        setText(text.toUpperCase());
    }

    const [textColor, setTextColor]=useState({
        color:"#0000FF"
    })
    let click2=()=> {
        setTextColor({
            color: "#00FF00"
    })}

    return (
        <>
            <form onSubmit={submit}>
                <label htmlFor="xyz">{text}</label>
                <input type="text" name="xyz" value={text} style={{color: textColor.color}} onChange={change} /><br />
                <button type="button" onClick={click1}>Change Text</button>
                <button type="button" onClick={click2}>Change Color</button>
                <button type="submit" disabled={textColor.color==="#0000FF"}>Submit</button>
            </form>
        </>
    )
}