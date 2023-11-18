//RouterDOM
import React from 'react';
import {BrowserRouter as Router, Routes, Route, Link, Outlet} from "react-router-dom";

const Home = () => <h1>Home Page</h1>;
const About = () => <h1>About Page</h1>;
const Nested = () => <>
    <h1>Nested Page</h1>
    <Outlet />
</>
const Skills = () => <h1>Skills Page</h1>;
const Works = () => <h1>Works Page</h1>;
const Contact = () => <h1>Contact Page</h1>;

export default function RouterDOM() {
    return (
        <Router>
            <ul>
                <li>
                    <Link to="/">Home</Link>
                </li>
                <li>
                    <Link to="/about">About</Link>
                </li>
                <li>
                    <Link to="/nested">Nested</Link>
                </li>
            </ul>
            <Routes>
                <Route path="/" element={<Home />} />
                <Route path="/about" element={<About />} />
                <Route path='/nested' element={<Nested />}>
                    <Route path="skills" element={<Skills />} />
                    <Route path="works" element={<Works />} />
                    <Route index element={<Contact />}/>
                </Route>
            </Routes>
        </Router>
    )
}

// npm install react-router-dom