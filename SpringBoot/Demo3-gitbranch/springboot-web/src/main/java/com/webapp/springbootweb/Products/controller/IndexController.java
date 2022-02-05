package com.webapp.springbootweb.Products.controller;

import com.webapp.springbootweb.SpringbootWebApplication;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;
import org.springframework.security.oauth2.client.authentication.OAuth2AuthenticationToken;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
// @ResponseBody
public class IndexController {
    private static Logger logger = LogManager.getLogger(SpringbootWebApplication.class);

    @RequestMapping("/")
    public String home() {
        logger.info("This is Main home page");
        System.out.println("main controller");
        return "home";
    }

    @RequestMapping("/403")
    public String accessDenied() {
        logger.error("This is Access Denied page");
        return "Accessdenied";
    }

    @GetMapping("/signin")
    public String signin() {
        logger.info("inside signin page");
        return "signin";
    }

    @GetMapping("/error")
    public String errorpage() {
        logger.info("This is error page");
        return "This is error page";
    }

    @GetMapping("/signup")
    public String register() {
        logger.info("Inside Signup page");
        return "signup";
    }

    @GetMapping("/OAuth")
    public String OAuthmethod(OAuth2AuthenticationToken token) {
        logger.info("Inside Oauth Method");
        System.out.println(token.getPrincipal());
        return "home";
    }
}
