package com.webapp.springbootweb.controller;

import java.util.List;

import com.fasterxml.jackson.annotation.JsonCreator.Mode;
import com.fasterxml.jackson.databind.annotation.JsonAppend.Prop;
import com.webapp.springbootweb.ExceptionalHandeling.ProductErrorResponse;
import com.webapp.springbootweb.ExceptionalHandeling.ProductNotFoundException;
import com.webapp.springbootweb.entities.Product;
import com.webapp.springbootweb.services.ProductService;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.rest.core.annotation.RestResource;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

// @RestController
@Controller
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
    // @ResponseBody
    @GetMapping("/product")
    public String findAllProducts(Model model)  {
        // return service.getProducts();
        List<Product> Listproduct = service.getProducts();
        model.addAttribute("Listproduct", Listproduct);
        return "products";
    }

    @GetMapping("/product/{id}")
    public String findProductById(@PathVariable int id, Model model) {

        if (service.CheckAvalability(id) == null ){
            throw new ProductNotFoundException("Student id Not Found - "+id);
        }
        Product prop= service.getProductsById(id);  
        // return new ResponseEntity<Product>(prop, prop!=null ? HttpStatus.FOUND : HttpStatus.NOT_FOUND);
        model.addAttribute("Listproduct", prop);
        return "products";
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

    @GetMapping("/product/new")
    public String ShowAddNewPage(Model model) {
        model.addAttribute("product", new Product());
        return "Addnew";
    }

    
}
