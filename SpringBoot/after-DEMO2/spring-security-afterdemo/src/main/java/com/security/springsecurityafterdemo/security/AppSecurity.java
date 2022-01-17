// package com.security.springsecurityafterdemo.security;

// // import com.webapp.springbootweb.Users.entity.User;
// import org.springframework.beans.factory.annotation.Autowired;
// import org.springframework.context.annotation.Configuration;
// import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
// import org.springframework.security.config.annotation.web.builders.HttpSecurity;
// import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
// import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
// import org.springframework.security.core.userdetails.User;
// import org.springframework.security.core.userdetails.UserDetails;
// import org.springframework.security.core.userdetails.UserDetailsService;
// import org.springframework.security.crypto.password.PasswordEncoder;
// import org.springframework.security.provisioning.InMemoryUserDetailsManager;


// @Configuration
// @EnableWebSecurity
// public class AppSecurity extends WebSecurityConfigurerAdapter {

//     private  PasswordEncoder  passwordEncoder;

//     // @Autowired
//     // private CustomUserDetailService customUserDetailService;

    
//     @Autowired  
//     public PasswordEncoder getPasswordEncoder() {
//         return passwordEncoder;
//     }



//     @Override
//     protected void configure(HttpSecurity http) throws Exception {
//         http
//                 .authorizeRequests()
//                 .antMatchers("/","/css/*","/js/*")
//                 .permitAll()
//                 .anyRequest()
//                 .authenticated()
//                 .and()
//                 .httpBasic();


//     }

    

//     @Override
//     // @Bean
//     protected UserDetailsService userDetailsService() {
//             UserDetails shashankUser =    User.builder()
//                         .username("shashank")
//                         .password(passwordEncoder.encode("password1"))
//                         .roles("STUDENT")  // ROLE_STUDENT 
//                         .build();
//             return new InMemoryUserDetailsManager(
//                 shashankUser
//                 );
            
//     }

//     @Override
//     protected void configure(AuthenticationManagerBuilder auth) throws Exception {
//         auth.inMemoryAuthentication()
//         .withUser("admin")
//         .password(getPasswordEncoder().encode("password1"))
//         .roles("ADMIN");
       
       
//         // auth.userDetailsService(customUserDetailService).passwordEncoder(passwordEncoder());
//     }

// }
