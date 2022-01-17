package com.security.springsecurityafterdemo.controller;

import java.util.List;

import com.security.springsecurityafterdemo.Service.UserService;
import com.security.springsecurityafterdemo.entity.User;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;


@RestController
public class UserController {

    @Autowired
    private UserService userService;

    @GetMapping(value="/")
    public List<User> getMethodName() {
        return userService.getUsers() ;
    }
    
}
