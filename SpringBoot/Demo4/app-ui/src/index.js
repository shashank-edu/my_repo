import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import 'bootstrap/dist/css/bootstrap.min.css';
import 'react-toastify/dist/ReactToastify.css';
import Home from './Home/Home';
import { BrowserRouter as Router, Route, Switch, Link, Routes } from 'react-router-dom';
import {
  BrowserRouter,
} from "react-router-dom";
import Header from './header/Header';

ReactDOM.render(
  <Router>
      <App/>
  </Router>,
  document.getElementById('root')
);

reportWebVitals();
