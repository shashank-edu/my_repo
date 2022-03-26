import logo from "./logo.svg";
import Home from "./Home/Home";
import "./App.css";
import { ToastContainer, toast } from "react-toastify";
import Header from "./header/Header";
import Footer from "./footer/Footer";
import NewUserForm from "./newuser/NewUserForm";
import Product from "./Products/Products";
import UserDetails from "./UserDetails/UserDetails";
import NewProduct from "./NewProduct/NewProduct";
import LoginPage from "./loginPage/LoginPage";
import AllProducts from "./Products/AllProducts";
import {
  BrowserRouter as Router,
  Switch,
  Route,
  Link,
  Routes,
} from "react-router-dom";
import { AuthContextProvider } from "./store/auth-context";

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
      {/* <AuthContextProvider> */}
      <Routes>
        <Route path="/" element={<LoginPage />} exact />
        <Route path="/home" element={<Home/>} exact />
        <Route path="/newuser" element={<NewUserForm />} exact />
        <Route path="/product" element={<Product />} exact />
        <Route path="/userdetail" element={<UserDetails />} exact />
        <Route path="/newproduct" element={<NewProduct />} exact />
        <Route path="/allproducts" element={<AllProducts />} exact />
      </Routes>
      {/* </AuthContextProvider> */}
      <ToastContainer />
      
    </>
  );
}

export default App;
