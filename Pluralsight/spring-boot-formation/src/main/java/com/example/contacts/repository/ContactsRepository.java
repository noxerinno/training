package com.example.contacts.repository;

import com.example.contacts.model.Contact;
import org.springframework.data.jpa.repository.JpaRepository;

public interface ContactsRepository extends JpaRepository<Contact, Long> {
}
