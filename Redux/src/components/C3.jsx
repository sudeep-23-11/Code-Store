//React Lifecycle Hooks

import React, {useReducer} from "react";

const reducer=(state, action)=> {
    console.log("Inside the useReducer hook");
    if(action.type==="Increment")
    return {count: state.count+1, color: state.color};
    else if(action.type==="Decrement")
    return {count: state.count-1, color: state.color};
    else if(action.type==="Green")
    return {count: state.count, color: "#00FF00"};
    else if(action.type==="Blue")
    return {count: state.count, color: "#0000FF"};
    else
    return state;
}

export default function C3() {

    const [state, dispatch]=useReducer(reducer, {
        count: 0,
        color: "#FF0000"
    });

    return (
        <>
            <button type="button" onClick={()=> dispatch({type: "Decrement"})}>-</button>
            <p>{state.count}</p>
            <button type="button" onClick={()=> dispatch({type: "Increment"})}>+</button>
            <br />
            <button type="button" onClick={()=> dispatch({type: "Green"})}>Green</button>
            <p style={{color: state.color}}>Redux</p>
            <button type="button" onClick={()=> dispatch({type: "Blue"})}>Blue</button>
        </>
    )
}