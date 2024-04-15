'use client';
import React, {useState, useEffect} from 'react';
import {useRouter} from 'next/navigation';

export default function client() {

    let submit = (event) => {
        event.preventDefault();
    }
    let change = (event) => {
        setText(event.target.value);
    }

    const router = useRouter();
    const [text, setText] = useState('Enter');
    let click = () => {
        setText(text.toUpperCase());
        // router.push('/server');
        // router.back();
        // router.replace('/server');
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