//LifecycleMethods
import React, {Component} from "react";

export default class LifecycleMethods extends Component {

    constructor(props) {
        console.log("constructor method");
        super(props);
        this.state= {
            text: "html"
        }
    }
    click=()=> {
        this.setState({
            text: "css"
        })
    }

    static getDerivedStateFromProps(props, state) {
        console.log("getDerivedStateFromProps method");
        console.log(props, state);
        return null;
    }
    componentDidMount() {
        console.log("componentDidMount method");
    }

    shouldComponentUpdate(nextProps, nextState) {
        console.log("shouldComponentUpdate method");
        console.log(nextProps, nextState);
        return true;
    }
    getSnapshotBeforeUpdate(prevProps, prevState) {
        console.log("getSnapshotBeforeUpdate method");
        console.log(prevProps, prevState);
        return null;
    }
    componentDidUpdate(prevProps, prevState, snapshot) {
        console.log("componentDidUpdate method");
        console.log(prevProps, prevState, snapshot);
    }

    componentWillUnmount() {
        console.log("componentWillUnmount method");
    }

    static getDerivedStateFromError(error) {
        console.log("getDerivedStateFromError method");
        console.log(error);
        return null;
    }
    componentDidCatch(error, info) {
        console.log("componentDidCatch method");
        console.log(error, info);
    }

    render() {
        return (
            <>
                {console.log("render method")}
                <p>{this.state.text}</p>
                <button type="button" onClick={this.click}>Change</button>
            </>
        )
    }
}