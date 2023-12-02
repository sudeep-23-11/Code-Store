import '../styles/globals.css';
import styles from '../styles/Home.module.css';
import Link from 'next/link';

export default function Home() {
    return (
        <div className={styles.container}>
            <Link href="/ClientSide">Client Side</Link><br />
            <Link href="/Components">Components</Link>
        </div>
    )
}

// npx create-next-app my-app
// npm run dev
// npm run build
// npm start