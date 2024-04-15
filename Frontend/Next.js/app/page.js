import '../styles/globals.css';
import styles from '../styles/Home.module.css';

import Image from 'next/image';
import Link from 'next/link';
import Script from 'next/script'

export const metadata = {
    title: 'title',
    keywords: 'keywords',
    description: 'description'
}

export default function Home() {
    return (
        <div className={styles.container}>
            <Image src='/workplace.png' alt='workplace loading' height={100} width={100} /><br />

            <Link href="/client">Client</Link><br />
            <Link href="/server">Server</Link>

            <Script src='./script.js' />
        </div>
    )
}

// npx create-next-app my-app
// npm run dev
// npm run build
// npm start