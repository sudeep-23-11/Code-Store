import express from 'express';

const router = express.Router();

router.use('/api', (req, res, next) => {
    console.log('Middleware fuction');
    next();
})

router.get('/api', (req, res) => {
    res.send('<h1>Get Request</h1>');
})
router.post('/api', (req, res) => {
    res.send('<h1>Post Request</h1>');
})
router.put('/api/:slug', (req, res) => {
    res.send('<h1>Put Request</h1>');
})
router.patch('/api/:slug', (req, res) => {
    res.send('<h1>Patch Request</h1>');
})
router.delete('/api/:slug', (req, res) => {
    res.send('<h1>Delete Request</h1>');
})

export default router;