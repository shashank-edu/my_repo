import React, { useState ,useEffect} from "react";



const AuthContext = React.createContext({
  token: "",
  login: (token) => {},
  logout: () => {},

  
});

export const AuthContextProvider = (props) => {
  const [token, setToken] = useState(null);

  const loginHandler = (token) => {
    setToken(token);
  };

  const logoutHandle = () => {
    setToken(null);
  };

  const contextValue = {
    token: token,
    login: loginHandler,
    logout: logoutHandle,
  };
  setToken(null);


  return (
    <AuthContext.Provider value={contextValue}>
      {props.children}
    </AuthContext.Provider>
  );
};

export default AuthContext;
