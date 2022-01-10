// package com.webapp.springbootweb.controller;

// import java.util.List;

// import javax.transaction.Transactional;

// import com.spring.springsecurityweb.Service.UserService;
// import com.spring.springsecurityweb.entity.User;

// import org.springframework.beans.factory.annotation.Autowired;
// import org.springframework.ui.Model;
// import org.springframework.validation.annotation.Validated;
// import org.springframework.web.bind.annotation.GetMapping;
// import org.springframework.web.bind.annotation.RestController;

// @RestController
// @Transactional
// public class UserController1 {
    
//     @Autowired
//     private UserService userService;

//     @GetMapping("/user")
//     public List<User> findAllUsers(@Validated User user ,Model model)  {
//         // return service.getProducts();
//         List<User> ListUser = userService.getUsers();
//         model.addAttribute("Listproduct", ListUser);
//         // return "products";
//         return ListUser;
//     }

//     public void UserController() {

//         User user = new User();
//         user.setEmail("hello@gmail.com");
//         user.setPassword("password");
//         user.setRole("ADMIN");
//         user.setUsername("username");
//         userService.addUser(user);
        
        

//     }

    
// }
