//State in RCC
//React Component Lifecycle Methods

import React, {Component} from "react";

export default class C5 extends Component {

    constructor(props) {
        console.log("Inside the constructor method");
        super(props);
        this.state= {
            text: "Foundation",
            color: "#0000FF"
        }
    }
    click=()=> {
        this.setState({
            text: "Bulma",
            color: "#00FF00"
        })
    }

    componentDidMount() {
        console.log("Inside the componentDidMount method");
    }
    componentDidUpdate(prevProps, prevState, snapshot) {
        console.log("Inside the componentDidUpdate method");
        console.log(prevProps, prevState, snapshot);
    }
    componentWillUnmount() {
        console.log("Inside the componentWillUnmount method");
    }

    static getDerivedStateFromProps(props, state) {
        console.log("Inside the getDerivedStateFromProps method");
        console.log(props, state);
        return null;
    }
    shouldComponentUpdate(nextProps, nextState) {
        console.log("Inside the shouldComponentUpdate method");
        console.log(nextProps, nextState);
        return true;
    }
    getSnapshotBeforeUpdate(prevProps, prevState) {
        console.log("Inside the getSnapshotBeforeUpdate method");
        console.log(prevProps, prevState);
        return null;
    }
    static getDerivedStateFromError(error) {
        console.log("Inside the getDerivedStateFromError method");
        console.log(error);
    }
    componentDidCatch(error, info) {
        console.log("Inside the componentDidCatch method");
        console.log(error, info);
    }

    render() {
        return (
            <>
                {console.log("Inside the render method")}
                <p style={{color: this.state.color}}>{this.props.p} {this.state.text}</p>
                <button type="button" onClick={this.click}>Change</button>
            </>
        )
    }
}