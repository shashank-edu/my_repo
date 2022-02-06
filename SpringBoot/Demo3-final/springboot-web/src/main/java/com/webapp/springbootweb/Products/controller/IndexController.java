package com.webapp.springbootweb.Products.controller;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;
import org.springframework.security.oauth2.client.authentication.OAuth2AuthenticationToken;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class IndexController {

    static Logger logger = LogManager.getLogger(IndexController.class);

    @RequestMapping("/home")
    public String home() {
        System.out.println("main controller");
        return "home";
    }

    @RequestMapping("/403")
    public String accessDenied() {
        return "Accessdenied";
    }

    @GetMapping("/")
    public String signin(){
        logger.info("inside signin page");
        return "login";
    }

    @GetMapping("/signin")
    public String signinerror(){
        logger.info("inside signin page");
        return "login";
    }
    
    @GetMapping("/OAuth")
    public String OAuthmethod(OAuth2AuthenticationToken token) {
        logger.info("Inside Oauth Method");
        System.out.println(token.getPrincipal());
        return "home";
    }
}
