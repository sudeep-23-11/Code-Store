//React Lifecycle Hooks

import React, {useState, useRef, createContext,
    useLayoutEffect, useEffect, useCallback, useMemo} from "react";

import C7 from "./C7.jsx";

export const cc=createContext();

export default function C6() {

    const [count, setCount]=useState(0);
    let click1=()=> {
        console.log("Inside the useState hook");
        setCount(count+1);
    }

    const ur=useRef();
    let click2=()=> {
        console.log("Inside the useRef hook");
        ur.current.focus();
        ur.current.value="Enter";
    }

    const uih=useRef();
    let click3=()=> {
        console.log("Inside the useImperativeHandle hook");
        uih.current.change();
    }

    useLayoutEffect(() => {
        console.log("Inside the useLayoutEffect hook");
    }, [count]);

    useEffect(() => {
        console.log("Inside the useEffect hook");
    }, [count]);
    
    const uc=useCallback(() => {
        return count;
    }, [count]);
    
    const um=useMemo(() => {
        console.log("Inside the useMemo hook");
        return count;
    }, [count]);

    return (
        <>
            <p>{count}</p>
            <button type="button" onClick={click1}>Click</button><br />
            <input type="text" ref={ur} />
            <button type="button" onClick={click2}>Click</button>
            <cc.Provider value={{count, setCount}}>
                <C7 func={uc} ref={uih} />
            </cc.Provider>
            {console.log(um)}
            <button type="button" onClick={click3}>Click</button>
        </>
    )
}