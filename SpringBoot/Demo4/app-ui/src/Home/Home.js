import React from "react";
import Header from "../header/Header";
import Footer from "../footer/Footer";
import Body from "./body/Body";
import NewUserForm from "../newuser/NewUserForm";
import NewProduct from "../NewProduct/NewProduct";
import Product from "../Products/Products";
import UserDetails from "../UserDetails/UserDetails";

const Home = () => {
  return (
    <div>
      <Header />
      <Body />
      <Footer />
    </div>
  );
};

export default Home;
