import React from 'react';

export default function server() {

    let func = async () => {
        const staticData = await fetch('https://example.com/resource', {
            cache: 'force-cache'
        })
        console.log(staticData);

        const dynamicData = await fetch('https://example.com/resource', {
            cache: 'no-cache'
        })
        console.log(dynamicData);

        const revalidatedData = await fetch('https://example.com/resource', {
            next: {revalidate: 10}
        })
        console.log(revalidatedData);
    }

    return (
        <>

        </>
    )
}