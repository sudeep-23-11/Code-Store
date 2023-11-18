import React from "react";
import {bindActionCreators} from "redux";
import {useSelector, useDispatch} from "react-redux";

import {countActions} from "../actions/index.js"

export default function Count() {

    const count = useSelector((state) => state.count);
    const dispatch = useDispatch();
    const {increment, decrement} = bindActionCreators(countActions, dispatch);

    return (
        <>
            <p>{count}</p>
            <button type="button" onClick={()=> increment(10)}>+</button>
            <button type="button" onClick={()=> decrement(5)}>-</button>
        </>
    )
}