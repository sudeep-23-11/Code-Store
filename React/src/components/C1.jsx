//React Functional based component
//Props in RFC

import React from "react";
import PropTypes from "prop-types";

export default function C1(props) {

    let {l1, l2}=props;

    if((l1==="React")&&(l2==="Angular"))
    {
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
    else
    {
        return (
            <>
                <p>Failure</p>
            </>
        )
    }
}

C1.propTypes= {
    l1: PropTypes.string.isRequired,
    l2: PropTypes.string,
}
C1.defaultProps= {
    l2: "Ember"
}

//npx create-react-app my-app
//npm start