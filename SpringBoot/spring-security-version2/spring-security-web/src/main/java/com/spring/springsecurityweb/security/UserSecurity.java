package com.spring.springsecurityweb.security;
import com.spring.springsecurityweb.Service.CustomUserDetailService;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.method.configuration.EnableGlobalMethodSecurity;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;

@Configuration
@EnableWebSecurity
@EnableGlobalMethodSecurity(prePostEnabled = true) 
public class UserSecurity extends WebSecurityConfigurerAdapter {

    @Autowired
    private CustomUserDetailService customUserDetailService;

    @Override
    protected void configure(HttpSecurity http) throws Exception {

        http
                .csrf().disable() // if client is not browser , CDRF is a attack and spring security help us to
                                  // protect it
                .authorizeRequests()
                // .antMatchers("/home","/login","/register").permitAll() // in there page it
                // doesn't ask for username and password
                // .antMatchers("/public/**").permitAll() // those start from /public/* login
                // w/o authentication
                .antMatchers("/product").permitAll()
                .antMatchers("/product/**").hasRole("ADMIN")
                .antMatchers("/signin").permitAll()
                .anyRequest()   
                .authenticated()
                .and()
                // .httpBasic();
                .formLogin();
                // .loginPage("/signin")
    //             .loginProcessingUrl("/dologin")
    //             .defaultSuccessUrl("/product");
    }

    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        // auth.inMemoryAuthentication().withUser("shashank").password("pass").roles("NORMAL");
        // auth.inMemoryAuthentication().withUser("normal").password(this.passwordEncoder().encode("password")).roles("NORMAL");

        // auth.inMemoryAuthentication().withUser("admin").password(this.passwordEncoder().encode("password")).roles("ADMIN");
        auth.userDetailsService(customUserDetailService).passwordEncoder(passwordEncoder());
    }

    // Role - high level overview -> Normal : READ
    // Authority - permission -> READ
    // ADMIN -> READ,WRITE, UPDATE

    // if we have to put some password in a plain text thena we have to create a
    // bean

    @Bean
    public BCryptPasswordEncoder passwordEncoder() {
        // return NoOpPasswordEncoder.getInstance();
        return new BCryptPasswordEncoder(10); // its encode the pass having strenght =10
    }
}
