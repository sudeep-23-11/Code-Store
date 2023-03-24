//React Functional based component
//Props in RFC

import React from "react";
import PropTypes from "prop-types";

export default function C1(props) {
    return (
        <>
            <ul>
                <li className="abc">{props.l1}</li>
                <li id="A">{props.l2}</li>
            </ul>
            <button type="button" onClick={props.lf}>Change List</button>
        </>
    )
}

C1.propTypes= {
    l1: PropTypes.string.isRequired
}
C1.defaultProps= {
    l2: "Ember"
}