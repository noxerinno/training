package com.personal.revival.model;

import com.fasterxml.jackson.annotation.JsonProperty;

import java.util.UUID;

public class Person {

    private final UUID id;
    private final String name;

    public Person() {
        this(UUID.randomUUID(), "John Do");
    }

    public Person(@JsonProperty("id") UUID id, @JsonProperty("name") String name) {
        this.id = id;
        this.name = name;
    }

    public UUID getId() {
        return id;
    }

    public String getName() {
        return name;
    }
}
