package com.springboot.webapp.controller;

import com.springboot.webapp.entities.Product;

import org.hibernate.HibernateException;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

public class AddEntities {
    public static void main(String[] args) {
        
        SessionFactory sf= new Configuration().configure("hibernate.cfg.xml").addAnnotatedClass(Product.class).buildSessionFactory();
        Session session =sf.getCurrentSession();

        // ACID -> Atomicity , Consistency , Isolation , Durability
        
        try{
            // creating new instance
            Product product = new Product();

            product.setName("magiee");
            product.setPrice(10);
            product.setProductId("DM#4322");
            product.setVersion(2.2);

            // start a transaction
            session.beginTransaction();
            // Product sp = (Product)session.get(Product.class,id); 

            // save the student object
            session.save(product);

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
