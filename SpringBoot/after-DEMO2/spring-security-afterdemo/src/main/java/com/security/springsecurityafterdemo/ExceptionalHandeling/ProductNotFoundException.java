package com.security.springsecurityafterdemo.ExceptionalHandeling;

public class ProductNotFoundException extends RuntimeException {

    public ProductNotFoundException(String message) {
        super(message);
    }

    public ProductNotFoundException(Throwable cause) {
        super(cause);
    }

    public ProductNotFoundException(String message, Throwable cause) {
        super(message, cause);
    }
    
}
