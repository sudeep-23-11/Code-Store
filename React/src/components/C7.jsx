//React Lifecycle Hooks

import React, {useState, useEffect,
    useContext, forwardRef, useImperativeHandle} from "react";

import {cc} from "./C6.jsx";

function C7(props, ref)
{
    const uc=useContext(cc);
    let click=()=> {
        console.log("Inside the useContext hook");
        uc.setCount(uc.count+1);
    }

    const [text, setText]=useState("Flask");
    useImperativeHandle(ref, () => ({
        change() {
            setText("Django");
        }
    }));

    useEffect(() => {
        console.log("Inside the useCallback hook");
    }, [props.func]);

    return (
        <>
            <p>{uc.count}</p>
            <button type="button" onClick={click}>Click</button>
            <p>{text}</p>
        </>
    )
}
export default forwardRef(C7);