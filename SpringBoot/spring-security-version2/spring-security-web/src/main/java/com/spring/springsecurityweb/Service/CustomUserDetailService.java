package com.spring.springsecurityweb.Service;

import com.spring.springsecurityweb.Models.CustomUserDetails;
import com.spring.springsecurityweb.Repository.UserRepository;
import com.spring.springsecurityweb.entity.User;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.core.userdetails.UsernameNotFoundException;
import org.springframework.stereotype.Service;


@Service
public class CustomUserDetailService implements UserDetailsService{
    
    @Autowired
    private UserRepository userRepository;

    @Override
    public UserDetails loadUserByUsername(String username) throws UsernameNotFoundException {
        User user=this.userRepository.findByUsername(username);
        if(user == null){
            throw new UsernameNotFoundException("No User");
        }
        return new CustomUserDetails(user);
    }
    
}
