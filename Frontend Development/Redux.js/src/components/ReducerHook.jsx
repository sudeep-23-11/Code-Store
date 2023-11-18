import React, {useReducer} from "react";

const reducer = (state, action) => {
    console.log("useReducer hook");
    if(action.type === "Increment")
    return {count: state.count+10, color: state.color};
    else if(action.type === "Decrement")
    return {count: state.count-5, color: state.color};
    else if(action.type === "Blue")
    return {count: state.count, color: "#0000FF"};
    else if(action.type === "Green")
    return {count: state.count, color: "#00FF00"};
    else
    return state;
}

export default function ReducerHook() {

    const [state, dispatch] = useReducer(reducer, {
        count: 0,
        color: "#FF0000"
    })

    return (
        <>
            <p>{state.count}</p>
            <button type="button" onClick={() => dispatch({type: "Increment"})}>+</button>
            <button type="button" onClick={() => dispatch({type: "Decrement"})}>-</button><hr />
            <p style={{color: state.color}}>Redux</p>
            <button type="button" onClick={() => dispatch({type: "Blue"})}>Blue</button>
            <button type="button" onClick={() => dispatch({type: "Green"})}>Green</button>
        </>
    )
}