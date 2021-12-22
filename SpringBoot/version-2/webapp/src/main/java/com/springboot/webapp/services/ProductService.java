package com.springboot.webapp.services;

import java.util.List;


import com.springboot.webapp.entities.Product;
import com.springboot.webapp.repositories.ProductRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Service;

@Service
public class ProductService {

    @Autowired
    private ProductRepository Prepo;

    // post method

    public Product saveProduct(Product prod){
        Product proCheck = Prepo.findById(prod.getId()).orElse(null);
        if(proCheck != null){
            return  null;
        }else{
            return Prepo.save(prod);
        }
        // return Prepo.save(prod);
        // return Prepo.findById(prod.getId()).orElse(null);
        

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
        if (existingProduct != null){
            existingProduct.setName(product.getName());
            existingProduct.setPrice(product.getPrice());
            existingProduct.setProductId(product.getProductId());
            existingProduct.setVersion(product.getVersion());
            return Prepo.save(existingProduct);
        }else{
            return null;
        }
        


    }

    public Product updateProductbyId(Product product,int id) {
        Product existingProduct = Prepo.findById(id).orElse(null);
        if (existingProduct != null){
            // Product existingProduct =Prepo.findById(id).orElse(null);
            existingProduct.setName(product.getName());
            existingProduct.setPrice(product.getPrice());
            existingProduct.setProductId(product.getProductId());
            existingProduct.setVersion(product.getVersion());
            return Prepo.save(existingProduct);
        }else{
            return null;
        }
        
    }


}
