import React, {useEffect,useState} from "react";
import Header from "../header/Header";
import Footer from "../footer/Footer";



const NewProduct = () => {
    useEffect(()=>{

    },[]);

    

    const[products,setProduct]=useState([
        {id:1,Name:"maggie",price:12,quantity:32,BatchNo:"#21"},
        {id:2,Name:"book",price:312,quantity:362,BatchNo:"#32"},
        {id:3,Name:"chocolate",price:100,quantity:352,BatchNo:"#3221"},
        {id:4,Name:"pen",price:12,quantity:3,BatchNo:"#54"},    
    ]);

    const pageTitle = "my page";
    return (
        <div>
            <div><Header /></div>
        <div>
        <h2 id="main-heading">{pageTitle}</h2>
        <button className="logout-button" type="button" onClick="logout()">Logout</button>
        <button id="homeButton" type="button" onClick="home()">Home</button>
    </div>

    {/* <form action="@{/product/save}" method="post" object="${product}" style="max-width: 500px; margin: 0 auto;"> */}
    <form>
        <div>
            <div>
                <label for="">Id:</label>
                <div>
                    <input type="text" field={products.id} maxlength="5" pattern="[0-9]*"/>
                </div>
            </div>
            {/* <!-- <input type="hidden" field=*{id}> --> */}

            <div>
                <label for="">Name:</label>
                <div>
                    <input type="text" field={products.Name} required minlength="3" maxlength="45"/>
                </div>
            </div>

            <div>
                <label for="">Price:</label>
                <div>
                    <input type="text" field={products.price} required minlength="2" pattern="[0-9]*"/>
                </div>
            </div>

            <div>
                <label for="">Quantity:</label>
                <div>
                    <input type="text" field={products.quantity} required  maxlength="3" 
                    pattern="[0-9]*"/>
                </div>
            </div>

            <div>
                <label for="">BatchNo:</label>
                <div>
                    <input type="text" field={products.BatchNo} minlength="3" maxlength="10"
                    pattern="[#][0-9]*"/>
                </div>
            </div>

            <div>
                <button id="submit-button" type="submit">Save</button>
                <button id="cancel-button" type="button" onClick="cancelForm()">Cancel</button>
            </div>
        </div>
    </form>
    <div><Footer /></div>
    </div>
    );
}

export default NewProduct;