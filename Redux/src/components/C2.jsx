//Redux

import React from "react";
import {useSelector, useDispatch} from "react-redux";
import {bindActionCreators} from "redux";

import {colorActions} from "../actions/index.js";

export default function C2() {

    const color=useSelector((state)=> state.color);
    const dispatch=useDispatch();
    const {green, blue}=bindActionCreators(colorActions, dispatch);

    return (
        <>
            <button type="button" onClick={()=> green()}>Green</button>
            <p style={{color: color}}>Redux</p>
            <button type="button" onClick={()=> blue()}>Blue</button>
            <br />
        </>
    )
}