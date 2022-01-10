package com.spring.springsecurityweb.Repository;

import com.spring.springsecurityweb.entity.User;

import org.springframework.beans.factory.annotation.Configurable;
import org.springframework.data.jpa.repository.JpaRepository;

@Configurable
public interface UserRepository  extends JpaRepository<User,Integer>{

    User findById(int UserId);

    User findByUsername(String username);
    
}
