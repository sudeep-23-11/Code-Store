//RouterDOM
import React from 'react';
import {BrowserRouter, Routes, Route, useParams, Link, NavLink, Navigate, Outlet} from "react-router-dom";

const Home = () => <h1>Home Page</h1>;
const About = () => <h1>About Page</h1>;
const Nested = () => <>
    <h1>Nested Page</h1>
    <Outlet />
</>
const Contact = () => <h1>Contact Page</h1>;
const Skills = () => <h1>Skills Page</h1>;
const Works = () => <h1>Works Page</h1>;
const Slug = () => <>
    {console.log(useParams())}
    <Navigate to="/about" />
</>

export default function RouterDOM() {
    return (
        <BrowserRouter>
            <ul>
                <li>
                    <Link to="/">Home</Link>
                </li>
                <li>
                    <NavLink to="/about" className={(isActive) => isActive ? "green" : "red"}>About</NavLink>
                </li>
                <li>
                    <Link to="/nested">Nested Contact</Link>
                </li>
                <li>
                    <Link to="/nested/skills">Nested Skills</Link>
                </li>
                <li>
                    <Link to="/nested/works">Nested Works</Link>
                </li>
            </ul>
            <Routes>
                <Route path="/" element={<Home />} />
                <Route path="/about" element={<About />} />
                <Route path='/nested' element={<Nested />}>
                    <Route index element={<Contact />}/>
                    <Route path="skills" element={<Skills />} />
                    <Route path="works" element={<Works />} />
                </Route>
                <Route path="/:slug" element={<Slug />} />
            </Routes>
        </BrowserRouter>
    )
}

// npm install react-router-dom