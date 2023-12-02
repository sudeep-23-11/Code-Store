'use client';
import React, {useState, useEffect} from 'react';

export default function ClientSide() {

    let submit = (event) => {
        event.preventDefault();
    }
    let change = (event) => {
        setText(event.target.value);
    }

    const [text, setText] = useState('Enter');
    let click = () => {
        setText(text.toUpperCase());
    }
    useEffect(() => {
        console.log(text);
    }, [text])

    return (
        <form action="https://www.youtube.com/" onSubmit={submit}>
            <input type="text" value={text} onChange={change}/><br />
            <button type="submit" onClick={click}>Submit</button>
        </form>
    )
}