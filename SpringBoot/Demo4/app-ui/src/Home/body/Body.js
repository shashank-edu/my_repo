import React from "react";
import { Link } from "react-router-dom";
import NormalButton from "../../buttons/NormalButton/NormalButton";

const Body = () => {

    const UserName = 'Shashank';
    const UserRole = 'Admin';
return (       
    <div >
<div className="dropdown">
<button className="btn btn-secondary dropdown-toggle" type="button" id="dropdownMenuButton1" data-bs-toggle="dropdown" aria-expanded="false">
{UserName}
</button>
<ul className="dropdown-menu" aria-labelledby="dropdownMenuButton1">
<li><a className="dropdown-item" href="#">{UserRole}</a></li>
</ul>
</div>
<br/>
<br/>
<br/>
<Link  to="/newuser">NewUserForm</Link>
<br/>
<Link to="/product">Product</Link>
<br/>
<Link to="/userdetail">UserDetails</Link>
<br/>
<Link to="/newproduct">NewProduct</Link>
<br/>

<button type="button" id="main-button" onClick="openMainPage()">Manage Products</button>
<button className="logout-button" type="button" onClick="logout()">Logout</button>
<button className="UserButton" type="button" onClick="userDetails()">User Details</button>

<img className="second-image" src="background.jpg" ></img>


    </div>
    );
    
}

export default Body;