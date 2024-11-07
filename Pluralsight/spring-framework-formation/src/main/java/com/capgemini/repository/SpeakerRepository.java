package com.capgemini.repository;

import com.capgemini.model.Speaker;

import java.util.List;

public interface SpeakerRepository {
    List<Speaker> findAll();
}
