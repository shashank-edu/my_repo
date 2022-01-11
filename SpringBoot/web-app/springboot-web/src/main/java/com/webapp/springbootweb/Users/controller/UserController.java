// package com.spring.springsecurityweb.controller;

// import java.security.Provider.Service;
// import java.util.List;

// import com.spring.springsecurityweb.Service.UserService;
// import com.spring.springsecurityweb.entity.User;

// import org.springframework.beans.factory.annotation.Autowired;
// import org.springframework.web.bind.annotation.GetMapping;
// import org.springframework.web.bind.annotation.PostMapping;
// import org.springframework.web.bind.annotation.RequestBody;
// import org.springframework.web.bind.annotation.ResponseBody;
// import org.springframework.web.bind.annotation.RestController;

// @RestController
// public class UserController {
    
//     @Autowired
//     private UserService userService;


//     @GetMapping("/")
//     public List<User> ShowUsers(){
//         return userService.getUsers();
//     }
    
    
//     @GetMapping("/user")
//     public User firstmethod() {
//         System.out.println(">>>>>>>>>>>>>>>>>>>>>>>>>>>>> running first method");
//         User user = new User();
//         user.setEmail("hello@gmail.com");
//         user.setPassword("password");
//         user.setRole("ADMIN");
//         user.setUsername("username");
//         userService.addUser(user);
//         return user;
//     }

//     @PostMapping("/user")
//     public User secondMethod(@RequestBody User user ){
//         return userService.addUser(user);
//     }
// }
