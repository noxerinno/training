package com.personal.revival.dao;

import com.personal.revival.model.Person;

import java.util.List;
import java.util.Optional;
import java.util.UUID;

public interface PersonDao {

    //Person POST
    int insertPerson(UUID id, Person person);
    default int insertPerson(Person person) {
        UUID id = UUID.randomUUID();
        return insertPerson(id, person);
    }

    //Person GET
    List<Person> selectAllPeople();
    Optional<Person> selectPersonById(UUID id);

    //Person DELETE
    int deletePersonById(UUID id);

    //Person PUT
    int updatePersonById(UUID id, Person person);
}
