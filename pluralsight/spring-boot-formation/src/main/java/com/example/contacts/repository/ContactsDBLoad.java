package com.example.contacts.repository;

import com.example.contacts.model.Contact;
import org.springframework.boot.CommandLineRunner;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class ContactsDBLoad {

    @Bean
    CommandLineRunner initcDatabase(ContactsRepository repository) {
        return args -> {
            System.out.println("Preloading " + repository.save(new Contact("Le D Lafarginio", "1233582950")));
            System.out.println("Preloading " + repository.save(new Contact("Le G Kugelmanninio", "1233582951")));
        };
    }
}
