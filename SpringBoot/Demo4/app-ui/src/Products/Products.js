import React, { useEffect, useState } from "react";


const Product = ({ products }) => {
  return (

      <tbody >
        <tr>
          <td>{products.id}</td>
          <td>{products.Name}</td>
          <td>{products.quantity}</td>
          <td>{products.price}</td>
          <td>{products.BatchNo}</td>
          <td>
            <a id="edit-link" href="@{'/product/edit/' + ${prop.id}}">
              Edit
            </a>
            <a id="delete-link" href="@{'/product/delete/' + ${prop.id}}">
              Delete
            </a>
          </td>
        </tr>
      </tbody>

  );
};

export default Product;
