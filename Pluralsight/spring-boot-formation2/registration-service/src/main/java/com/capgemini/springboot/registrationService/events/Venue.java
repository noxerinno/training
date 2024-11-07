package com.capgemini.springboot.registrationService.events;

public record Venue(
        int id,
        String name,
        String street,
        String city,
        String country) {
}
