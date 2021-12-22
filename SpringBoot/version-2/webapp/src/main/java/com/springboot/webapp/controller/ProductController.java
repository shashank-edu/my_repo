package com.springboot.webapp.controller;

import java.util.List;


import com.springboot.webapp.entities.Product;
import com.springboot.webapp.services.ProductService;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ProductController {

    @Autowired
    private ProductService service;

    // post method

    @PostMapping("/product")
    // @ResponseStatus(code =  HttpStatus.CREATED)
    public ResponseEntity<Product> addProduct(@RequestBody Product product) {
        Product pr = service.saveProduct(product);
        return new ResponseEntity<Product>(pr, pr!=null ? HttpStatus.CREATED : HttpStatus.CONFLICT);
    }


    // @PostMapping("/product")
    // public List<Product> addProducts(@RequestBody List<Product> products) {
    //     return service.saveProducts(products);
    // }


    // get method
    @GetMapping("/product")
    public List<Product> findAllProducts() {
        return service.getProducts();
    }

    @GetMapping("/product/{id}")
    public ResponseEntity<Product>findProductById(@PathVariable int id) {
        Product prop= service.getProductsById(id);
        return new ResponseEntity<Product>(prop, prop!=null ? HttpStatus.FOUND : HttpStatus.NOT_FOUND);
    }

    // @GetMapping("/product/{name}")
    // public Product findProductByName(@PathVariable String name) {
    //     return service.getProductsByName(name);
    // }

    // updateProduct
    @PutMapping("/product")
    public ResponseEntity<Product> updateProduct(@RequestBody Product product) {
        Product prop =  service.updateProduct(product);
        return new ResponseEntity<Product>(prop, prop!=null ? HttpStatus.ACCEPTED : HttpStatus.NOT_FOUND);
    }
    
    // updateProductbyId
    @PutMapping("/product/{id}")
    public ResponseEntity<Product> updateProduct(@PathVariable int id,@RequestBody Product product) {
        Product prop = service.updateProductbyId(product,id);
        return new ResponseEntity<Product>(prop, prop!=null ? HttpStatus.ACCEPTED : HttpStatus.NOT_FOUND);
    }

    @DeleteMapping("/product/{id}")
    public String deleteProduct(@PathVariable Integer id) {

        if(service.getProductsById(id) != null){
            return service.deleteProduct(id);
    }
        else{
            return "product not found";
        }
        
        // return service.deleteProduct(id);
    }

    
}
