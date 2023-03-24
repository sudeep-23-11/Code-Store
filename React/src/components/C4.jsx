//React Router DOM
//React Class based component
//Props in RCC

import React, {Component} from "react";
import PropTypes from "prop-types";
import {BrowserRouter as Outlet, Link} from "react-router-dom";

export default class C4 extends Component {

    l1="React";

    static propTypes= {
        l2: PropTypes.string.isRequired
    }
    static defaultProps= {
        l2: "Ember"
    }

    render() {
        if(this.props.l2==="Angular")
        {
            return (
                <>
                    <ul>
                        <li>{this.l1}</li>
                        <li id="B">{this.props.l2}</li>
                    </ul>
                    <button type="button" onClick={this.props.lf}>Change List</button>
                </>
            )
        }
        else
        {
            return (
                <>
                    <ul>
                        <li>
                            <Link to=".1">C5.2</Link>
                        </li>
                        <li>
                            <Link to=".2">C5.3</Link>
                        </li>
                    </ul>
                    <Outlet />
                </>
            )
        }
    }
}