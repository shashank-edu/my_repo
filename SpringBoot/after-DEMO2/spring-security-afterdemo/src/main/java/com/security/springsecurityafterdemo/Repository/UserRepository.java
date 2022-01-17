package com.security.springsecurityafterdemo.Repository;

import com.security.springsecurityafterdemo.entity.User;

import org.springframework.beans.factory.annotation.Configurable;
import org.springframework.data.jpa.repository.JpaRepository;

@Configurable
public interface UserRepository  extends JpaRepository<User,Integer>{

    User findByUsername(String username);

    
}
