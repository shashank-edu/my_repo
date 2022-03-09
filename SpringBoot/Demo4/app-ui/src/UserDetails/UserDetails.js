import React from "react";

const UserDetails = (prop) =>{
    const message = "this is best App";

    return (
        <div>
            <div>
        <h1 id="main-heading">Manage User</h1>
    </div>
<div>
    {/* <!-- <a id="add-product" href="@{/product/new}">Add New Product</a> --> */}
    <button id="add-product" type="button" onclick="addUser()">Add New User</button>
    <button className="logout-button" type="button" onclick="logout()">Logout</button>
    <button id="homeButton" type="button" onclick="home()">Home</button>
</div>
<container>
    <div id="message-text" if="${message}">
        {message}
    </div>
   
</container>

    <div >
        <table>
            <thead>

                <tr>
                    <th>User ID</th>
                    <th>User Name</th>
                    <th>Role</th>
                    <th>Email</th>
                </tr>
            </thead>

            <tbody>
                <block each="prop: ${Listproduct}">
                    <tr>
                        <td>{prop.userId}</td>
                        <td>{prop.username}</td>
                        <td>{prop.email}</td>
                        <td>{prop.role}</td>
                        
                        <td>
                            
                            <a id="edit-link" href="@{'/user/edit/' + ${prop.userId}}">Edit</a>
                            <a id="delete-link" href="@{'/user/delete/' + ${prop.userId}}">Delete</a>
                        </td>
                    </tr>
                </block>
            </tbody>
        </table>
    </div>
        </div>
    );
}

export default UserDetails;