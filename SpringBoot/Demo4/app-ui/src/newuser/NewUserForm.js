import React, { useEffect, useState } from "react";
import "./NewUserForm.css";
import Header from "../header/Header";
import Footer from "../footer/Footer";
import axios from "axios";
import base_url from "../serviceAPI/PropertiesAPI";
import { toast } from "react-toastify";

const NewUserForm = () => {
  useEffect(() => {
    document.title = "Add user";
  }, []);

  const [user, setUser] = useState({});

  const handleForm = (e) => {
    console.log(user);
    postDataToServer(user);
    e.preventDefault();
  };

// creating function to post data on server
const postDataToServer = (data) => {
  axios.post(`${base_url}/product/save`).then(
    (response)=>{
      console.log(response);
      toast.success("user has been added");
    },(error)=>{
      console.log(error);
      toast.error("some thing went wrong");
    }
  )

}

  const id = "1608988";
  const pageTitle = "New User Page";
  return (
    <div>
      <div>
        <Header />
      </div>
      <div>
        <h2 id="main-heading">{pageTitle}</h2>
        <button className="logout-button" type="button" onclick="logout()">
          Logout
        </button>
        <button id="homeButton" type="button" onclick="home()">
          Home
        </button>
      </div>

      <form
        onSubmit={handleForm}
        // action="@{/user/save}"
        // method="post"
        // object="${user}"
        // style="max-width: 500px; margin: 0 auto;"
      >
        <div>
          <div>
            <label for="">User Id:</label>
            <div>
              <input
                type="text"
                field="*{userId}"
                maxlength="5"
                pattern="[0-9]*"
                onChange={(e) => {
                  setUser({...user,id:e.target.value});
                }}
              />
            </div>
          </div>
          <input type="hidden" field={user.id} />
          <div>
            <label for="">User Name:</label>
            <div>
              <input
                type="text"
                field={user.username}
                required
                minlength="3"
                maxlength="45"
                onChange={(e) => {
                  setUser({...user,username:e.target.value});
                }}
              />
            </div>
          </div>

          <div>
            <label for="">Email:</label>
            <div>
              <input
                type="text"
                field={user.email}
                pattern="\w{3,}[@]\w{3,}[.]\w{2,}"
                onChange={(e) => {
                  setUser({...user,email:e.target.value});
                }}
              />
            </div>
          </div>

          <div>
            <label for="">Role:</label>
            <div>
              <input type="text" field={user.role} pattern="[a-zA-Z0-9]*"
              onChange={(e) => {
                setUser({...user,role:e.target.value});
              }} />
            </div>
          </div>
          <div>
            <label for="">Password:</label>
            <div>
              <input type="password" field={user.password} minlength="6" 
              onChange={(e) => {
                setUser({...user,password:e.target.value});
              }}/>
            </div>
          </div>

          <div>
            <button id="submit-button" type="submit">
              Save
            </button>
            <button id="cancel-button" type="button" onclick="userDetails()">
              Cancel
            </button>
          </div>
        </div>
      </form>
      <div>
        <Footer />
      </div>
    </div>
  );
};

export default NewUserForm;
