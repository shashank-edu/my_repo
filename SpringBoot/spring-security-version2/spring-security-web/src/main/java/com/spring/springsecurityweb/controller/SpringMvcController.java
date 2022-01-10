package com.spring.springsecurityweb.controller;

import java.util.List;

import com.spring.springsecurityweb.Repository.UserRepository;
import com.spring.springsecurityweb.Service.UserService;
import com.spring.springsecurityweb.entity.User;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;


@RestController // this means what ever the data we return is return in the form of json
@RequestMapping("/users")
// @Controller
public class SpringMvcController {

    @Autowired
    private UserService userService;

    @Autowired
    private BCryptPasswordEncoder bCryptPasswordEncoder;

    @Autowired
    private UserRepository userRepository;

 
    // all users
    @GetMapping("/")
    public List<User> getAllUsers() {
        return this.userService.getUsers();
    }

    // return single user
    // @PreAuthorize("hasRole('ADMIN')")
    @GetMapping("/{id}")
    public User getUser(@PathVariable("id") int id){

        return this.userService.getUser(id);
    }

    // @PostMapping("/")
    // public User add(@RequestBody User user) {
    //     return this.userService.addUser(user);
        
    // }

    @GetMapping("/adduser")
    public User add() {
        User user = new User();
        user.setEmail("ADMINNORMAL@gmail.com");
        user.setPassword(this.bCryptPasswordEncoder.encode("password"));
        user.setRole("ADMIN");
        user.setUsername("admin");
        user.setUserId(1);
        userRepository.save(user);
        return user;
    }



}
