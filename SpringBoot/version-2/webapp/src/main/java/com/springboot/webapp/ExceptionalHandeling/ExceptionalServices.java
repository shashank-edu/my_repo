package com.springboot.webapp.ExceptionalHandeling;

import java.util.List;

import com.springboot.webapp.entities.Product;

public interface ExceptionalServices {
    Product saveProduct(Product product) throws ProductAlreadyExistsException;
    List getAllProducList() throws ProductNotFoundException;
    Product getProductById(int id) throws ProductNotFoundException;
}
