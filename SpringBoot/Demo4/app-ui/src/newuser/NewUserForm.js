import React from "react";
import './NewUserForm.css';

const NewUserForm = () => {
    const id ='1608988'
    const pageTitle = 'New User Page';
  return (
        <div>
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
              />
            </div>
          </div>
          <input type="hidden" field={id} />
          <div>
            <label for="">User Name:</label>
            <div>
              <input
                type="text"
                field="*{username}"
                required
                minlength="3"
                maxlength="45"
              />
            </div>
          </div>

          <div>
            <label for="">Email:</label>
            <div>
              <input
                type="text"
                field="*{email}"
                pattern="\w{3,}[@]\w{3,}[.]\w{2,}"
              />
            </div>
          </div>

          <div>
            <label for="">Role:</label>
            <div>
              <input type="text" field="*{role}" pattern="[a-zA-Z0-9]*" />
            </div>
          </div>
          <div>
            <label for="">Password:</label>
            <div>
              <input type="password" field="*{password}" minlength="6" />
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
    // </div>
    
  );
};

export default NewUserForm;
