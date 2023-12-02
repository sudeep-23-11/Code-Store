import React from 'react';
import Head from 'next/head';
import Image from 'next/image';
import Script from 'next/script';

export const metadata = {
    title: 'Title',
    description: 'Description',
}

export default function Components() {
    return (
        <>
            <Head>
                <title>Title</title>
                <meta name="description" content="Description" />
                <link rel="stylesheet" href="style.css" />
            </Head>
            <Image src='/workplace.png' alt='workplace loading' height={100} width={100} />
            <Script src='script.js' />
        </>
    )
}