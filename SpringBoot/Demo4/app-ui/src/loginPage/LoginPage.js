import React, { useEffect, useState, useContext } from "react";
import axios from "axios";
import base_url from "../serviceAPI/PropertiesAPI";
import { toast } from "react-toastify";
import Home from "../Home/Home";
import { useHistory, Navigate } from "react-router-dom";

import {
  BrowserRouter as Router,
  Switch,
  Route,
  Link,
  Routes,
} from "react-router-dom";
import AuthContext from "../store/auth-context";

const LoginPage = () => {
  useEffect(() => {
    document.title = "Login page";
  }, []);

  const authCtx = useContext(AuthContext);

  const [user, setUser] = useState({});

  const handleForm = (e) => {
    console.log(user);
    postDataToServer(user);
    e.preventDefault();
  };

  const postDataToServer = (data) => {
    axios.post(`${base_url}/token`, data).then(
      (response) => {
        console.log(response);
        if (response.data.token) {
          localStorage.setItem("user", JSON.stringify(response.data));
          console.log(localStorage);
          
          const navigate = Navigate();
          navigate("/");
          window.location.reload();
        }
        // CallHomePage(response.data);
        else {
          toast.warn("Authentication failed");
        }
      },
      (error) => {
        console.log(error);
        toast.error("some thing went wrong");
      }
    );
  };

  const isLoggedIn = authCtx.token.length > 0;

  console.log(authCtx.token.length);

  return (
    <>
      <form onSubmit={handleForm}>
        <section className="vh-100" style={{ backgroundColor: "#508bfc" }}>
          <div className="container py-5 h-100">
            <div className="row d-flex justify-content-center align-items-center h-100">
              <div className="col-12 col-md-8 col-lg-6 col-xl-5">
                <div
                  className="card shadow-2-strong"
                  style={{ borderRadius: "1rem" }}
                >
                  <div className="card-body p-5 text-center">
                    <h3 className="mb-5">Sign in</h3>

                    <div className="form-outline mb-4">
                      <input
                        type="text"
                        id="typeEmailX-2"
                        className="form-control form-control-lg"
                        field={user.username}
                        onChange={(e) => {
                          setUser({ ...user, username: e.target.value });
                        }}
                      />

                      <label className="form-label" htmlFor="typeEmailX-2">
                        Email
                      </label>
                    </div>

                    <div className="form-outline mb-4">
                      <input
                        type="password"
                        id="typePasswordX-2"
                        className="form-control form-control-lg"
                        onChange={(e) => {
                          setUser({ ...user, password: e.target.value });
                        }}
                      />
                      <label className="form-label" htmlFor="typePasswordX-2">
                        Password
                      </label>
                    </div>

                    {/* <!-- Checkbox --> */}

                    <button
                      className="btn btn-primary btn-lg btn-block"
                      type="submit"
                    >
                      Login
                    </button>

                    <hr className="my-4" />

                    <button
                      className="btn btn-lg btn-block btn-primary"
                      style={{ backgroundColor: "#dd4b39" }}
                      type="submit"
                    >
                      <i className="fab fa-google me-2"></i> Sign in with GitHub
                    </button>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
      </form>
    </>
  );
};

export default LoginPage;
