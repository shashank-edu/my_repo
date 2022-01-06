package com.webapp.springbootweb.entities;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;




@Entity
public class Product {
    
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;
    private String batchNo;
    private String productId;
    private String name;
    private int price;


    public Integer getId() {
        return id;
    }
    public void setId(Integer id) {
        this.id = id;
    }
    public String getbatchNo() {
        return batchNo;
    }
    public void setbatchNo(String batchNo) {
        this.batchNo = batchNo;
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

    public Product(Integer id, String batchNo, String productId, String name, int price) {
        this.id = id;
        this.batchNo = batchNo;
        this.productId = productId;
        this.name = name;
        this.price = price;
    }

    public Product() {
    }

    
}
