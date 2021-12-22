package com.springboot.webapp.controller;

import java.util.List;

import com.springboot.webapp.entities.Product;
import com.springboot.webapp.services.ProductService;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ProductController {

    @Autowired
    private ProductService service;

    // post method

    @PostMapping("/product")
    public Product addProduct(@RequestBody Product product) {
        return service.saveProduct(product);
    }

    // @PostMapping("/product")
    // public List<Product> addProducts(@RequestBody List<Product> products) {
    //     return service.saveProducts(products);
    // }

    // get method

    @GetMapping("/product")
    public List<Product> findAllpProducts() {
        return service.getProducts();
    }

    @GetMapping("/product/{id}")
    public Product findProductById(@PathVariable int id) {
        return service.getProductsById(id);
    }

    // @GetMapping("/product/{name}")
    // public Product findProductByName(@PathVariable String name) {
    //     return service.getProductsByName(name);
    // }

    @PutMapping("/product")
    public Product updateProduct(@RequestBody Product product) {
        return service.updateProduct(product);
    }

    @DeleteMapping("/product/{id}")
    public String deleteProduct(@PathVariable Integer id) {
        return service.deleteProduct(id);
    }
}
