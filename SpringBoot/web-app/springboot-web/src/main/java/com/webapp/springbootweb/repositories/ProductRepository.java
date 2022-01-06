package com.webapp.springbootweb.repositories;

import com.webapp.springbootweb.entities.Product;

import org.springframework.beans.factory.annotation.Configurable;
// import org.springframework.context.annotation.ComponentScan;
import org.springframework.data.jpa.repository.JpaRepository;
// import org.springframework.stereotype.Service;

@Configurable
public interface ProductRepository extends JpaRepository<Product,Integer> {

    // Product findbyName(String name);
    
}