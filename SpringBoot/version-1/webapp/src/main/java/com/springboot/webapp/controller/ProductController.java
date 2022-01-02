package com.springboot.webapp.controller;

import java.util.List;

import com.springboot.webapp.ExceptionalHandeling.ProductErrorResponse;
import com.springboot.webapp.ExceptionalHandeling.ProductNotFoundException;
import com.springboot.webapp.entities.Product;
import com.springboot.webapp.services.ProductService;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.ExceptionHandler;
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
        // check the student id against the list size

        // if ((id >= theProducts.size()) || (id < 0) )
        if(service.checkData(id) == null){
            throw new ProductNotFoundException("Student id Not Found - "+id);
        }else{
            return service.getProductsById(id);
        }
        
    }
    
  // add an exception handler using @ExceptionalHandler
    
  @ExceptionHandler
  public ResponseEntity<ProductErrorResponse> handleException(ProductNotFoundException exe){
  
      // create a ProductErrorResponce
      ProductErrorResponse error = new ProductErrorResponse();
      error.setMessage(exe.getMessage());
      error.setStatus(HttpStatus.NOT_FOUND.value());
      error.setTimestamp(System.currentTimeMillis());
      // return ResponseEntity
      return new ResponseEntity<>(error,HttpStatus.NOT_FOUND);
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
