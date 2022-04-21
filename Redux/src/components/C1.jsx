//Redux

import React from "react";
import {useSelector, useDispatch} from "react-redux";
import {bindActionCreators} from "redux";

import {countActions} from "../actions/index.js"

export default function C1() {

    const count=useSelector((state)=> state.count);
    const dispatch=useDispatch();
    const {increment, decrement}=bindActionCreators(countActions, dispatch);

    return (
        <>
            <button type="button" onClick={()=> decrement(5)}>-</button>
            <p>{count}</p>
            <button type="button" onClick={()=> increment(10)}>+</button>
            <br />
        </>
    )
}

//npm install redux react-redux redux-thunk