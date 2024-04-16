//ClassComponent
import React, {Component} from 'react';
import PropTypes from "prop-types";

export default class ClassComponent extends Component {

    static propTypes = {
        var: PropTypes.string.isRequired
    }
    static defaultProps = {
        var: "css"
    }

    constructor(props) {
        super(props);
        this.state = {
            text: "Enter",
            color: "#0000FF"
        }
    }
    changeText = () => {
        this.setState({
            text: this.state.text.toUpperCase()
        })
    }
    changeColor = () => {
        this.setState({
            color: "#00FF00"
        })
    }

    render() {
        return (
            <>
                <p id="d">{this.props.var}</p>
                <button type="button" onClick={this.props.func}>Change</button><hr />
                <p style={{color: this.state.color}}>{this.state.text}</p>
                <button type="button" onClick={this.changeText}>Change Text</button>
                <button type="button" onClick={this.changeColor}>Change Color</button>
            </>
        )
    }
}