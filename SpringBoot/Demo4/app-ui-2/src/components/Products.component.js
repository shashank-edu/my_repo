import React from "react";
import authService from "../services/auth.service";
import userService from "../services/user.service";
import { useEffect, useState } from "react";
import Product from "./Product";
import { useHistory } from "react-router-dom";

let UserDetail = authService.getCurrentUser();

const Products = () => {
  let history = useHistory();

  useEffect(() => {
    document.title = "All Products";
  }, []);

  const [products, setProduct] = useState([
    // { id: 1, name: "maggie", price: 12, quantity: 32, batchNo: "#21" },
    // { id: 2, name: "book", price: 312, quantity: 362, batchNo: "#32" },
    // { id: 3, name: "chocolate", price: 100, quantity: 352, batchNo: "#3221" },
    // { id: 4, name: "pen", price: 12, quantity: 3, batchNo: "#54" },
  ]);
  console.log(products);
  useEffect(() => {
    userService.getProducts().then((result) =>
      setProduct(
            result.data
      )
      
    );
    console.log(products);
  }, []);

  const addProduct = () => {
    history.push("/addproduct");
  };

  return (
    <div>
      <div>
        <h1 id="main-heading" style={{ textAlign: "center" }}>
          Manage Products
        </h1>
      </div>
      <div>
        {/* <!-- <a id="add-product" href="@{/product/new}">Add New Product</a> --> */}
        <br />
        <br />
        <br />
        {UserDetail.role[0].authority == "ROLE_ADMIN" ||
        UserDetail.role[0].authority == "ROLE_MODERATOR" ? (
          <button id="add-product" type="button" onClick={addProduct}>
            Add New Product
          </button>
        ) : (
          true
        )}
      </div>

      <div>
        <table
          className="table-center"
          style={{ marginLeft: "auto", marginRight: "auto" }}
        >
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
            ? products.map((item) => <Product key={item.id} products={item} /> )
            : "No Products"}
        </table>
      </div>
    </div>
  );
};

export default Products;
