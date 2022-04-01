import React, { Component, useState } from "react";
import Form from "react-validation/build/form";
import Input from "react-validation/build/input";
import CheckButton from "react-validation/build/button";
import { email } from "validator";

import AuthService from "../services/auth.service";

const required = (value) => {
  if (!value) {
    return (
      <div className="alert alert-danger" role="alert">
        This field is required!
      </div>
    );
  }
};  

const vprice = (value) => {
    console.log("value :",typeof(value));
  if ( !(value.length >=2 && value.length <= 4) )  {
    return (
      <div className="alert alert-danger" role="alert">
        This is not a valid price.
      </div>
    );
  }
};

const vProductName = (value) => {
  if (value.length < 3 || value.length > 20) {
    return (
      <div className="alert alert-danger" role="alert">
        The ProductName must be between 3 and 20 characters.
      </div>
    );
  }
};
const vquantity = (value) => {
  if (value.length < 3 || value.length > 20) {
    return (
      <div className="alert alert-danger" role="alert">
        The Quantity must be between 3 and 20 characters.
      </div>
    );
  }
};

const vbatchNo = (value) => {
  if (value.length < 6 || value.length > 40) {
    return (
      <div className="alert alert-danger" role="alert">
        The batchNo must be between 6 and 40 characters.
      </div>
    );
  }
};

const EntityForm=()=> {


const [ProductName,setProductName]=useState();
const [quantity,setquantity]=useState();
const [price,setprice] =useState();
const [batchNo,setbatchNo] =useState();
const [success,setSuccess] =useState();
const [message,setMessage] =useState();

 const onChangeProductName =(e) =>{
        setProductName(e.target.value);
  }

 const onChangequantity =(e) => {
    setquantity(e.target.value);
  }

  const onChangeprice=(e) =>{
    setprice(e.target.value);
  }

const  onChangebatchNo=(e) =>{
    setbatchNo(e.target.value);
  }

 const handleRegister=(e) =>{
    e.preventDefault();

    // this.setState({
    //   message: "",
    //   successful: false,
    // });
    setSuccess(false);
    setMessage("");

    this.form.validateAll();

    if (this.checkBtn.context._errors.length === 0) {
      AuthService.registerProduct(
        ProductName,
        quantity,
        price,
        batchNo
      ).then(
        (response) => {
            setSuccess(true);
            setMessage(response.data.message);
        //   this.setState({
        //     message: response.data.message,
        //     successful: true,
        //   });
        },
        (error) => {
          const resMessage =
            (error.response &&
              error.response.data &&
              error.response.data.message) ||
            error.message ||
            error.toString();

            setSuccess(false);
            setMessage(resMessage);
        //   this.setState({
        //     successful: false,
        //     message: resMessage,
        //   });
        }
      );
    }
  }

 
    return (
      <div className="col-md-12">
        <div className="card card-container">
          {/* <img
            src="//ssl.gstatic.com/accounts/ui/avatar_2x.png"
            alt="profile-img"
            className="profile-img-card"
          /> */}

          <Form
            onSubmit={handleRegister}
            // ref={(c) => {
            //   this.form = c;
            // }} 
          >
            {!success && (
              <div>
                <div className="form-group">
                  <label htmlFor="ProductName">Product Name</label>
                  <Input
                    type="text"
                    className="form-control"
                    name="ProductName"
                    value={ProductName}
                    onChange={onChangeProductName}
                    validations={[required, vProductName]}
                  />
                </div>

                <div className="form-group">
                  <label htmlFor="quantity">Quantity</label>
                  <Input
                    type="text"
                    className="form-control"
                    name="quantity"
                    value={quantity}
                    onChange={onChangequantity}
                    validations={[required, vquantity]}
                  />
                </div>

                <div className="form-group">
                  <label htmlFor="price">Price</label>
                  <Input
                    type="text"
                    className="form-control"
                    name="price"
                    value={price}
                    onChange={onChangeprice}
                    validations={[required, vprice]}
                  />
                </div>

                <div className="form-group">
                  <label htmlFor="batchNo">Batch No.</label>
                  <Input
                    type="batchNo"
                    className="form-control"
                    name="batchNo"
                    value={batchNo}
                    onChange={onChangebatchNo}
                    validations={[required, vbatchNo]}
                  />
                </div>

                <div className="form-group">
                  <button className="btn btn-primary btn-block">Save</button>
                </div>
              </div>
            )}

            {message && (
              <div className="form-group">
                <div
                  className={
                    success
                      ? "alert alert-success"
                      : "alert alert-danger"
                  }
                  quantity="alert"
                >
                  {message}
                </div>
              </div>
            )}
            <CheckButton
              style={{ display: "none" }}
            //   ref={(c) => {
            //     this.checkBtn = c;
            //   }}
            />
          </Form>
        </div>
      </div>
    );
  
}


export default EntityForm;