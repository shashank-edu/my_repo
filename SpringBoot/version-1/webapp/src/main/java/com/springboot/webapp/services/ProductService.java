package com.springboot.webapp.services;

import java.util.List;

import com.mysql.cj.Session;
import com.springboot.webapp.entities.Product;
import com.springboot.webapp.repositories.ProductRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class ProductService {

    @Autowired
    private ProductRepository Prepo;

    // post method

    public Product saveProduct(Product prod){
        return Prepo.save(prod);

    }

    public List<Product> saveProducts(List<Product> prod){
        return Prepo.saveAll(prod);

    }

    public List<Product> getProducts(){
        return Prepo.findAll();
    }

    public Product getProductsById(int id){
        return Prepo.findById(id).orElse(null);
    }
    
    // public Product getProductsByName(String name){
    //     return Prepo.findbyName(name);
    // }

    public String deleteProduct(Integer id){
        Prepo.deleteById(id);
        return "Product removed !! "+id;
    }

    public Product updateProduct(Product product){
        Product existingProduct =Prepo.findById(product.getId()).orElse(null);
        existingProduct.setName(product.getName());
        existingProduct.setPrice(product.getPrice());
        existingProduct.setProductId(product.getProductId());
        existingProduct.setVersion(product.getVersion());
        return Prepo.save(existingProduct);


    }


}
