package com.webapp.springbootweb.Users.security;
import com.webapp.springbootweb.Users.Service.CustomUserDetailService;

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
                .antMatchers("/product").permitAll()
                .antMatchers("/product/new","/product/edit/**","/product/save","/product/delete/**").hasRole("MODERATOR")
                // .antMatchers("/product/**/**").hasRole("MODERATOR")
                .antMatchers("/signin").permitAll()
                .antMatchers("/user/**","/product/new","/product/edit/**","/product/save","/product/delete/**").hasRole("ADMIN")
                .anyRequest()   
                .authenticated()
                .and()
                .exceptionHandling().accessDeniedPage("/403")
                .and()
                .formLogin();
    }


    
    @Override
    protected void configure(AuthenticationManagerBuilder auth) throws Exception {
        auth.inMemoryAuthentication().withUser("admin").password(this.passwordEncoder().encode("password")).roles("ADMIN");
        auth.userDetailsService(customUserDetailService).passwordEncoder(passwordEncoder());
    }
    @Bean
    public BCryptPasswordEncoder passwordEncoder() {
        return new BCryptPasswordEncoder(10); // its encode the pass having strenght =10
    }
}
