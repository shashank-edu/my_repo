package com.springboot.webapp.entities;

import java.math.BigDecimal;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Version;




@Entity
public class Product {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;
    private Double version;
    private String productId;
    private String name;
    private int price;


    public Integer getId() {
        return id;
    }
    public void setId(Integer id) {
        this.id = id;
    }
    public Double getVersion() {
        return version;
    }
    public void setVersion(Double version) {
        this.version = version;
    }
    public String getProductId() {
        return productId;
    }
    public void setProductId(String productId) {
        this.productId = productId;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getPrice() {
        return price;
    }
    public void setPrice (int price) {
        this.price = price;
    }

    public Product(Integer id, Double version, String productId, String name, int price) {
        this.id = id;
        this.version = version;
        this.productId = productId;
        this.name = name;
        this.price = price;
    }

    public Product() {
    }

    
}
