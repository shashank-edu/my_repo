import React from "react";

const NewProduct = () => {
    const pageTitle = "my page";
    return (
        <div>
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
                    <input type="text" field="*{id}"  maxlength="5" pattern="[0-9]*"/>
                </div>
            </div>
            {/* <!-- <input type="hidden" field=*{id}> --> */}

            <div>
                <label for="">Name:</label>
                <div>
                    <input type="text" field="*{name}" required minlength="3" maxlength="45"/>
                </div>
            </div>

            <div>
                <label for="">Price:</label>
                <div>
                    <input type="text" field="*{price}" required minlength="2" pattern="[0-9]*"/>
                </div>
            </div>

            <div>
                <label for="">Quantity:</label>
                <div>
                    <input type="text" field="*{quantity}" required  maxlength="3" 
                    pattern="[0-9]*"/>
                </div>
            </div>

            <div>
                <label for="">BatchNo:</label>
                <div>
                    <input type="text" field="*{batchNo}" minlength="3" maxlength="10"
                    pattern="[#][0-9]*"/>
                </div>
            </div>

            <div>
                <button id="submit-button" type="submit">Save</button>
                <button id="cancel-button" type="button" onClick="cancelForm()">Cancel</button>
            </div>
        </div>
    </form>
    </div>
    );
}

export default NewProduct;