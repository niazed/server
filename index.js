const express = require('express')
const app = express()
const port = 3000

app.get('/login', (req, res) => {
  res.send('Hello World!')
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
// BO4s8J8qEUMej2qV
// 6Zje6sTy39HPq+Ams+eC9A==