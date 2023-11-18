import React from "react";
import {bindActionCreators} from "redux";
import {useSelector, useDispatch} from "react-redux";

import {colorActions} from "../actions/index.js";

export default function Color() {

    const color = useSelector((state) => state.color);
    const dispatch = useDispatch();
    const {blue, green} = bindActionCreators(colorActions, dispatch);

    return (
        <>
            <p style={{color: color}}>Redux</p>
            <button type="button" onClick={()=> blue()}>Blue</button>
            <button type="button" onClick={()=> green()}>Green</button>
        </>
    )
}