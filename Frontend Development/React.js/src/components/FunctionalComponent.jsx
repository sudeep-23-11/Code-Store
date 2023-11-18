//FunctionalComponent
//Forms
import React, {useState } from 'react';
import PropTypes from 'prop-types';

export default function FunctionalComponent(props) {

    let submit = (event) => {
        event.preventDefault();
    }
    let change = (event) => {
        setText(event.target.value);
    }
    
    const [text, setText]=useState("Enter");
    let changeText = () => {
        setText(text.toUpperCase());
    }
    const [style, setStyle]=useState({
        color:"#0000FF"
    })
    let changeColor = () => {
        setStyle({
            color: "#00FF00"
    })}

    return (
        <>
            <p id="a" className="b">{props.var}</p>
            <button type="button" onClick={props.func}>Change</button><hr />
            <form action="https://www.youtube.com/" onSubmit={submit}>
                <label htmlFor="c" style={{color: style.color}}>{text}</label>
                <input type="text" name="c" value={text} onChange={change} /><br />
                <button type="button" onClick={changeText}>Change Text</button>
                <button type="button" onClick={changeColor}>Change Color</button>
                <button type="submit" disabled={style.color === "#0000FF"}>Submit</button>
            </form>
        </>
    )
}

FunctionalComponent.propTypes= {
    var: PropTypes.string.isRequired
}
FunctionalComponent.defaultProps= {
    var: 'css'
}