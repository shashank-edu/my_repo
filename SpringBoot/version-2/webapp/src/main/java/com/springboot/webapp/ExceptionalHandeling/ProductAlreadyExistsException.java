package com.springboot.webapp.ExceptionalHandeling;

public class ProductAlreadyExistsException extends RuntimeException{
    private String message;

    public ProductAlreadyExistsException(String message, String message2) {
        super(message);
        message = message2;
    }

}
