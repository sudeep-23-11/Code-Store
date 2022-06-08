//React Router DOM

import React from 'react'
import {BrowserRouter as Router, Routes, Route, Link} from "react-router-dom";

import C4 from "./C4.jsx";
import C5 from "./C5.jsx";

export default function C3() {
    
    let click=()=> {
        let i=document.getElementById("B");
        i.innerHTML="Vue";
    }
    
    return (
        <>
            <Router>
                <ul>
                    <li>
                        <Link to="/">C4</Link>
                    </li>
                    <li>
                        <Link to="/1">C5.1</Link>
                    </li>
                    <li>
                        <Link to="/2">C5.2</Link>
                    </li>
                </ul>
                <Routes>
                    <Route path="/" element={
                        <C4 l2="Angular" lf={click} />
                    } />
                    <Route exact path="/1" element={
                        <C5 p="Bootstrap" />
                    } />
                    <Route exact path="/2" element={
                        <C5 p="Tailwind" />
                    } />
                </Routes>
            </Router>
        </>
    )
}

//npm install react-router-dom