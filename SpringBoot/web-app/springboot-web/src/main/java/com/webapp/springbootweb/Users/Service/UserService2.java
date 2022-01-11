// package com.webapp.springbootweb.Users.Service;
// package com.webapp.springbootweb.services;

// import java.util.List;
// import com.webapp.springbootweb.ExceptionalHandeling.ProductNotFoundException;
// import com.webapp.springbootweb.UserRepository.UserRepository;
// import com.webapp.springbootweb.entities.User;
// import org.springframework.beans.factory.annotation.Autowired;
// import org.springframework.stereotype.Service;

// @Service
// public class UserService {

//     @Autowired
//     private UserRepository userRepository;

//     // post method
//     public User saveUser(User user){
//         return userRepository.save(user);
//     }

//     public List<User> saveUsers(List<User> user){
//         return userRepository.saveAll(user);

//     }
//     public List<User> getUsers(){
//         return userRepository.findAll();
        
//     }

//     public User getUsersByUserName(String username){
//         User User= userRepository.findByUsername(username).orElse(null);
//         if(User != null){
//             return User;
//         }
//         throw new ProductNotFoundException("Could not find any User with ID "+username);
//     }

//     public String deleteUser(String username){
//         userRepository.deleteById(username);;
//         return "User removed !! "+username;
//     }

//     public User updateUser(User user){
//         User existingUser =userRepository.findById(user.getUsername()).orElse(null);
//         if (existingUser!= null){
//             existingUser.setEmail(user.getEmail());
//             existingUser.setPassword(user.getPassword());
//             existingUser.setRole(user.getRole());
//             return user;
//         }else{
//             return null;
//         }
//     }

//     // public Product updateProductbyId(Product product,int id) {
//     //     Product existingProduct = Prepo.findById(id).orElse(null);
//     //     if (existingProduct != null){
//     //         // Product existingProduct =Prepo.findById(id).orElse(null);
//     //         existingProduct.setName(product.getName());
//     //         existingProduct.setPrice(product.getPrice());
//     //         existingProduct.setBatchNo(product.getBatchNo());
//     //         existingProduct.setQuantity(product.getQuantity());
//     //         return Prepo.save(existingProduct);
//     //     }else{
//     //         return null;
//     //     }
        
//     // }

// }
