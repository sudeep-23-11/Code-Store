//Router
import express from 'express';
import router from './routes.js';

const port = 3000;
const app = express();

app.use(express.json());
app.use('/router', router);

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})