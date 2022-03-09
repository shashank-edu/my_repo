import logo from "./logo.svg";
import Home from "./Home/Home";
import "./App.css";
import { ToastContainer, toast } from "react-toastify";
import Header from "./header/Header";
import Footer from "./footer/Footer";
import {
  BrowserRouter as Router,
  Switch,
  Route,
  Link,
  Routes,
} from "react-router-dom";

function App() {
  const notify = () =>
    toast.success("🦄 Wow so easy!", {
      position: "top-center",
      autoClose: 5000,
      hideProgressBar: false,
      closeOnClick: true,
      pauseOnHover: true,
      draggable: true,
      progress: undefined,
    });

  return (
    <>
      <Header />
      <Routes>
        <Route path="/" element={<Home />} exact />
      </Routes>
      <Footer />
    </>
  );
}

export default App;
