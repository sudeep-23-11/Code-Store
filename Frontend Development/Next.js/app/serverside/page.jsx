import React from 'react';

export default function ServerSide() {

    const staticData = fetch('https://example.com/resource', {
        cache: 'force-cache'
    })
    console.log(staticData);

    const dynamicData = fetch('https://example.com/resource', {
        cache: 'no-cache'
    })
    console.log(dynamicData);

    const revalidatedData = fetch('https://example.com/resource', {
        next: {revalidate: 10}
    })
    console.log(revalidatedData);

    return (
        <>

        </>
    )
}