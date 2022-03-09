import React from "react";
import './Header.css';
import NormalButton from "../buttons/NormalButton/NormalButton";

const Header = () =>{
    return(
        <div>
            <header>
	<div className="overlay">
    <h1>Welcome to CRUD Web-Application</h1>
    <h2>Simply The Best</h2>
    <p>This is the best website you ever seen</p>
	<br/>
	
		</div>  
    </header>

        </div>
    );

}

export default Header;