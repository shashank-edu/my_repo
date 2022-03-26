import React, { useEffect, useState } from "react";
import Footer from "../footer/Footer";
import Product from "./Products";
import Header from "../header/Header";
import './AllProducts.css'
import base_url from "../serviceAPI/PropertiesAPI";
import axios from "axios";
import { toast } from "react-toastify";

const AllProducts = (prop) => {
  const UserName = "shashank";
  const UserRole = "Admin";

  useEffect(() => {
      document.title="All courses";
  }, []);

  const [products, setProduct] = useState([
    { id: 1, Name: "maggie", price: 12, quantity: 32, BatchNo: "#21" },
    { id: 2, Name: "book", price: 312, quantity: 362, BatchNo: "#32" },
    { id: 3, Name: "chocolate", price: 100, quantity: 352, BatchNo: "#3221" },
    { id: 4, Name: "pen", price: 12, quantity: 3, BatchNo: "#54" },
  ]);

  // function to call server:
  const getAllProductsFromServer= ()=> {
        axios.get(`${base_url}/product`).then(
            (response)=>{
                console.log(response);
                console.log(response.data);
                toast.success("courses has been loaded");
                
            },
            (error)=>{
                console.log(error);
                toast.error("some thing went wrong");
            }
        );
  }

  // loading products by calling function
  useEffect(() => {
    getAllProductsFromServer();
}, []);

  return (
    <div>
      <Header />
      <div>
        <h1 id="main-heading">Manage Products</h1>
      </div>
      <div>
        {/* <!-- <a id="add-product" href="@{/product/new}">Add New Product</a> --> */}
        <div className="dropdown" >
          <button
            className="btn btn-secondary dropdown-toggle"
            type="button"
            id="dropdownMenuButton1"
            data-bs-toggle="dropdown"
            aria-expanded="false"
          >
            {UserName}
          </button>
          <ul className="dropdown-menu" aria-labelledby="dropdownMenuButton1">
            <li>
              <a className="dropdown-item" href="#">
                {UserRole}
              </a>
            </li>
          </ul>
        </div>
        <br />
        <br />
        <br />
<>

</>
        <button id="add-product" type="button"  onclick="addProduct()">
          Add New Product
        </button>
        <button className="logout-button" type="button"  onclick="logout()">
          Logout
        </button>
        <button id="homeButton" type="button"  onclick="home()">
          Home
        </button>
      </div>

      <div>
        <table className="table-center">
          <thead>
            <tr>
              <th>Id</th>
              <th>Name</th>
              <th>Quantity</th>
              <th>Price</th>
              <th>Batch No.</th>
            </tr>
          </thead>

          {products.length > 0
            ? products.map((item) => <Product key={item.id} products={item} />)
            : "No Products"}
        </table>
      </div>
      <Footer/>
    </div>
  );
};
export default AllProducts;
