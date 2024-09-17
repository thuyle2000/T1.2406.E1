import logo from './logo.svg';
import './App.css';

import { Routes, Route, Link } from 'react-router-dom';
import EmployeeCreate from './pages/Employee-create';
import Employee from './pages/Employee';

import data from './data.json';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <span className="App-title">Employee Control Panel</span>
      </header>

      {/* Menu Bar */}
      <nav>
        <Link to="/"> Home </Link> /
        <Link to="/employee-index"> View </Link> /
        <Link to="/employee-create"> Create </Link> /
      </nav>

      {/* Routes */}
      <Routes>
        <Route path='/employee-index' element={<Employee db={data}/>} />
        <Route path='/employee-create' element={<EmployeeCreate db = {data}/>} />
      </Routes>


    </div>
  );
}

export default App;
