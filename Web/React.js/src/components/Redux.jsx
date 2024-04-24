//Redux
import React from "react";
import {useSelector, useDispatch} from "react-redux";

export default function Redux() {

    const count = useSelector((state) => state.count);
    const color = useSelector((state) => state.color);
    const dispatch = useDispatch();
    
    const increment = (val) => {
        dispatch({
            type: "Increment",
            payLoad: val
        })
    }
    const decrement = (val) => {
        dispatch({
            type: "Decrement",
            payLoad: val
        })
    }
    const blue = () => {
        dispatch({
            type: "Blue",
            payLoad: "#0000FF"
        })
    }
    const green = () => {
        dispatch({
            type: "Green",
            payLoad: "#00FF00"
        })
    }

    return (
        <>
            <p style={{color: color}}>{count}</p>
            <button type="button" onClick={()=> increment(10)}>+</button>
            <button type="button" onClick={()=> decrement(5)}>-</button>
            <button type="button" onClick={()=> blue()}>Blue</button>
            <button type="button" onClick={()=> green()}>Green</button>
        </>
    )
}

// npm install redux react-redux