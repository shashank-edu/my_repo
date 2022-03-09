import React from "react";

const Product = (prop) => {
    const UserName = 'shashank';
    const UserRole  = 'Admin';

  return (
    <div>
      <div>
        <h1 id="main-heading">Manage Products</h1>
      </div>
      <div>
        {/* <!-- <a id="add-product" href="@{/product/new}">Add New Product</a> --> */}
        <div className="dropdown">
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

        <button id="add-product" type="button" onclick="addProduct()">
          Add New Product
        </button>
        <button className="logout-button" type="button" onclick="logout()">
          Logout
        </button>
        <button id="homeButton" type="button" onclick="home()">
          Home
        </button>
      </div>

      <div>
        <table>
          <thead>
            <tr>
              <th>Id</th>
              <th>Name</th>
              <th>Quantity</th>
              <th>Price</th>
              <th>Batch No.</th>
            </tr>
          </thead>

          <tbody>
            <block each=" prop: ${Listproduct}">
              <tr>
                <td>{prop.id}</td>
                <td>{prop.name}</td>
                <td>{prop.quantity}</td>
                <td>{prop.price}</td>
                <td>{prop.batchNo}</td>

                <td>
                  <a id="edit-link" href="@{'/product/edit/' + ${prop.id}}">
                    Edit
                  </a>
                  <a id="delete-link" href="@{'/product/delete/' + ${prop.id}}">
                    Delete
                  </a>
                </td>
              </tr>
            </block>
          </tbody>
        </table>
      </div>
    </div>
  );
};

export default Product;
