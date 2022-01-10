package com.spring.springsecurityweb.Service;

import java.util.List;

import com.spring.springsecurityweb.Repository.UserRepository;
import com.spring.springsecurityweb.entity.User;

import org.aspectj.internal.lang.annotation.ajcDeclareAnnotation;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.stereotype.Service;

@Service
public class UserService {
    
    @Autowired
    private UserRepository userRepository;

    @Autowired
    private BCryptPasswordEncoder bCryptPasswordEncoder;

    public User addUser(User user1) {
        User user = new User();
            user.setEmail(user1.getEmail());
            user.setPassword(this.bCryptPasswordEncoder.encode(user1.getPassword()));
            user.setRole(user1.getRole());
            user.setUsername(user1.getUsername());
            userRepository.save(user);
            return user1;
    }

    public List<User> getUsers() {
        return userRepository.findAll();
    }

    // public List<User> getAllUsers() {
    //     return null;
    // }

    public User getUser(int id) {
        return userRepository.findById(id) ;
    // }

    // public static User saveUser(User user) {
    //     return userRes
    // }
}
}
