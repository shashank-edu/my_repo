package com.webapp.springbootweb.controller;


import com.webapp.springbootweb.entities.Product;

import org.hibernate.HibernateException;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

public class AddEntities {
    public static void main(String[] args) {
        
        SessionFactory sf= new Configuration().configure("hibernate.cfg.xml").addAnnotatedClass(Product.class).buildSessionFactory();
        Session session =sf.getCurrentSession();

        // ACID 
        
        try{
            // creating new instance
            Product product = new Product();

            product.setName("maggi");
            product.setPrice(10);
            product.setProductId("M#4322");
            product.setbatchNo("#21");;

            Product product1 = new Product();

            product1.setName("KitKat");
            product1.setPrice(20);
            product1.setProductId("KT#4542");
            product1.setbatchNo("#53");;

            // start a transaction
            session.beginTransaction();
            // Product sp = (Product)session.get(Product.class,id); 

            // save the student object
            session.save(product);
            session.save(product1);

             // commit transaction
            session.getTransaction().commit();
            System.out.println("Done!");

        }catch (HibernateException e) {
            e.printStackTrace();
            session.getTransaction().rollback();
        }finally{
            session.close();
        }

       

    }
    
}
