import React, { useEffect, useState } from "react";
import Button from 'react-bootstrap/Button';


const editItem = () => {};

const deleteItem = () => {};

const List = ({ products, users }) => {
  return (
    <tbody>
      {products ? (
        <tr>
          <td>{products.id}</td>
          <td>{products.name}</td>
          <td>{products.quantity}</td>
          <td>{products.price}</td>
          <td>{products.batchNo}</td>
          <td>
            <Button
              id="edit-link"
              onClick={editItem}
              variant="primary"
              style={{ marginRight: "5px" }}
            >
              Edit
            </Button>
            <Button
              id="delete-link"
              onClick={deleteItem}
              variant="danger"
              style={{ marginLeft: "5px" }}
            >
              Delete
            </Button>
          </td>
        </tr>
      ) : (
        <tr>
          <td>{users.userId}</td>
          <td>{users.username}</td>
          <td>{users.role}</td>
          <td>{users.email}</td>
          <td>
            <Button
              id="edit-link"
              onClick={editItem}
              variant="primary"
              style={{ marginRight: "5px" }}
            >
              Edit
            </Button>
            <Button
              id="delete-link"
              onClick={deleteItem}
              variant="danger"
              style={{ marginLeft: "5px" }}
            >
              Delete
            </Button>
            {/* <a id="edit-link" href="@{'/product/edit/' + ${prop.id}}">
              Edit
            </a>
            <a id="delete-link" href="@{'/product/delete/' + ${prop.id}}">
              Delete
            </a> */}
          </td>
        </tr>
      )}
    </tbody>
  );
};

export default List;
