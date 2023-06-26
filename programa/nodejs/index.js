const express = require('express')

const userRoute = require('../nodejs/routes/userRoute')

const app = express()
const port = 3000

app.get('/', (req, res) => res.send('Olá mundo'))

app.listen(port, () => console.log('Api rodando na porta 3000'))

