package com.example.contacts.controller;

import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.boot.test.web.client.TestRestTemplate;

import static org.assertj.core.api.Assertions.assertThat;

@SpringBootTest(webEnvironment = SpringBootTest.WebEnvironment.RANDOM_PORT)
class ContactsControllerTest {

    @Value(value= "${local.server.port}")
    private int port;
    private static final String URL = "http://localhost:";
    private static final String DOMAIN = "/contacts";

    @Autowired
    private TestRestTemplate restTemplate;

    @Test
    void greetingShouldReturnDefaultMessage() throws Exception {
        assertThat(this.restTemplate.getForObject(this.URL + port + this.DOMAIN, String.class)).containsAnyOf("Le D Lafarginio");
        assertThat(this.restTemplate.getForObject(this.URL + port + this.DOMAIN, String.class)).containsAnyOf("Le G Kugelmanninio");
    }
}
