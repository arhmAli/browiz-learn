import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
// import './App.css'
import axios from 'axios'

function App() {
  const [user, setUser] = useState('')
  const [pass,setPass]=useState('')
  const handleChange=(e)=>{
    if(e.target.id==='username'){
      setUser(e.target.value)
  }
  else if (e.target.id==='password'){
    setPass(e.target.value)
  }
}
const handleClick=async()=>{
    const data={
      username:user,
      password:pass
    }
    const res=await axios.post('http://localhost:3200/register',data)
    console.log(res.data)
    console.log(user,pass)

}
  return (
    <>
    <div className='main'>
      <label htmlFor='username'>Username</label>
      <input
      type='text'
      id='username'
      value={user}
      onChange={handleChange}
      />
      <label htmlFor='password'>Password</label>
      <input
      type='password'
      id='password'
      value={pass}
      onChange={handleChange}
      />
      <button onClick={handleClick}>Send Data</button>
    </div>
    </>
    )
}

export default App
