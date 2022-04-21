//React Class based component
//Props in RCC

import React, {Component} from "react";
import PropTypes from "prop-types";

export default class C4 extends Component {

    l1="React";

    static propTypes= {
        l2: PropTypes.string.isRequired
    }
    static defaultProps= {
        l2: "Ember"
    }

    render() {
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
}