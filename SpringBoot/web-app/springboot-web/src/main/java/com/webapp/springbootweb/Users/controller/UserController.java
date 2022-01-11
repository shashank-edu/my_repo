package com.webapp.springbootweb.Users.controller;

import java.util.List;

import com.webapp.springbootweb.Users.Service.UserService;
import com.webapp.springbootweb.Users.entity.User;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
@RequestMapping("/user")
public class UserController {
    
    @Autowired
    private UserService userService;
    
    @GetMapping("/list")
    public String findAllProducts(Model model) {
        // return service.getProducts();
        List<User> Listproduct = userService.getUsers();
        model.addAttribute("Listproduct", Listproduct);
        return "UserDetails";
    }
    // @Autowired
    // private UserService userService;


    // @GetMapping("/")
    // public List<User> ShowUsers(){
    //     return userService.getUsers();
    // }
    
    
    // @GetMapping("/user")
    // public User firstmethod() {
    //     System.out.println(">>>>>>>>>>>>>>>>>>>>>>>>>>>>> running first method");
    //     User user = new User();
    //     user.setEmail("hello@gmail.com");
    //     user.setPassword("password");
    //     user.setRole("ADMIN");
    //     user.setUsername("username");
    //     userService.addUser(user);
    //     return user;
    // }

    // @PostMapping("/user")
    // public User secondMethod(@RequestBody User user ){
    //     return userService.addUser(user);
    // }
}
