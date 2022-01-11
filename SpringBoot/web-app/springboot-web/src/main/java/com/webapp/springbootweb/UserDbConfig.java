// package com.webapp.springbootweb;

// import javax.persistence.EntityManagerFactory;
// import javax.sql.DataSource;

// import org.springframework.beans.factory.annotation.Qualifier;
// import org.springframework.boot.context.properties.ConfigurationProperties;
// import org.springframework.boot.jdbc.DataSourceBuilder;
// import org.springframework.boot.orm.jpa.EntityManagerFactoryBuilder;
// import org.springframework.context.annotation.Bean;
// import org.springframework.context.annotation.Configuration;
// import org.springframework.data.jpa.repository.config.EnableJpaRepositories;
// import org.springframework.orm.jpa.JpaTransactionManager;
// import org.springframework.orm.jpa.LocalContainerEntityManagerFactoryBean;
// import org.springframework.transaction.PlatformTransactionManager;
// import org.springframework.transaction.annotation.EnableTransactionManagement;

// @Configuration
// @EnableTransactionManagement
// @EnableJpaRepositories(entityManagerFactoryRef = "UserEntityManagerFactory",
//     transactionManagerRef = "UserTransactionManager", basePackages = {"com.webapp.springbootweb.UserRepository"})
// public class UserDbConfig {

//   @Bean(name = "UserDataSource")
//   @ConfigurationProperties(prefix = "spring.datasource")
//   public DataSource dataSource() {
//     return DataSourceBuilder.create().build();
//   }

//   @Bean(name = "UserEntityManagerFactory")
//   public LocalContainerEntityManagerFactoryBean barEntityManagerFactory(
//       EntityManagerFactoryBuilder builder, @Qualifier("UserDataSource") DataSource dataSource) {
//     return builder.dataSource(dataSource).packages("com.webapp.springbootweb.entities").persistenceUnit("User")
//         .build();
//   }

//   @Bean(name = "UserTransactionManager")
//   public PlatformTransactionManager barTransactionManager(
//       @Qualifier("UserEntityManagerFactory") EntityManagerFactory UserEntityManagerFactory) {
//     return new JpaTransactionManager(UserEntityManagerFactory);
//   }

// }
