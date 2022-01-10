package com.spring.springsecurityweb.Hibernate;

import javax.transaction.Transactional;

import com.spring.springsecurityweb.Service.UserService;
import com.spring.springsecurityweb.entity.User;
import org.hibernate.HibernateException;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;


public class JpaHibernate {

    public static void main(String[] args) {
     
        
        SessionFactory sf= new Configuration().configure("hibernate.cfg.xml").addAnnotatedClass(User.class).buildSessionFactory();
        Session session =sf.getCurrentSession();

        // ACID 
        
        try{
            // creating new instance
            User user = new User();
            user.setEmail("normal@gmail.com");
            user.setPassword("password");
            user.setRole("USER");
            user.setUsername("user");
            user.setUserId(1);
            


            // start a transaction
            session.beginTransaction();
            // Product sp = (Product)session.get(Product.class,id); 

            // save the student object
            session.save(user);
            // session.save(product1);

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


