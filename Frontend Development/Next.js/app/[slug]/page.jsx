import React from 'react';

export default function Router({params}) {

    const slug = params.slug;

    return (
        <h1>{slug}</h1>
    )
}