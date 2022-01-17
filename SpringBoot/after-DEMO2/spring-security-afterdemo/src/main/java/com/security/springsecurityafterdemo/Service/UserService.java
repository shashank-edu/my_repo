package com.security.springsecurityafterdemo.Service;

import java.util.List;

import com.security.springsecurityafterdemo.ExceptionalHandeling.ProductNotFoundException;
import com.security.springsecurityafterdemo.Repository.UserRepository;
import com.security.springsecurityafterdemo.entity.User;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.stereotype.Service;

@Service
public class UserService {

    @Autowired
    private UserRepository userRepository;

    // @Autowired
    // private BCryptPasswordEncoder bCryptPasswordEncoder;

    public User addUser(User user1) {
        User user = new User();
        user.setEmail(user1.getEmail());
        user.setPassword(user1.getPassword());
        user.setRole("ROLE_"+user1.getRole().toUpperCase());
        user.setUsername(user1.getUsername());
        userRepository.save(user);
        return user1;
    }

    public List<User> getUsers() {
        return userRepository.findAll();
    }

    public User getUser(int id) {
        return userRepository.getById(id);
    }

    public User updateUser(User user) {
        User existingUser = userRepository.getById(user.getUserId());
        if (existingUser != null) {
            existingUser.setEmail(user.getEmail());
            existingUser.setPassword(user.getPassword());
            existingUser.setRole(user.getRole());
            return user;
        }else {
            return null;
        }
    }

    public String deleteUser(int id) {
        userRepository.deleteById(id);
        return "User removed !! " + id;
    }

    public User getUsersByUserName(String username) {
        User User = userRepository.findByUsername(username);
        if (User != null) {
            return User;
        }
        throw new ProductNotFoundException("Could not find any User with ID " + username);
    }

    // post method
    // public User saveUser(User user) {
    //     return userRepository.save(user);
    // }

    // public List<User> saveUsers(List<User> user) {
    //     return userRepository.saveAll(user);

    // }

}