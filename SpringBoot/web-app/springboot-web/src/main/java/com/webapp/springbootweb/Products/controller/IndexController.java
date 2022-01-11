package com.webapp.springbootweb.Products.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
// import org.springframework.web.bind.annotation.ResponseBody;

@Controller
// @ResponseBody
public class IndexController {
    @RequestMapping("/index")
    public String index(){
        return "index";
    }

    @RequestMapping("/")
    public String home(){
        System.out.println("main controller");
        return "home";
    }
}
