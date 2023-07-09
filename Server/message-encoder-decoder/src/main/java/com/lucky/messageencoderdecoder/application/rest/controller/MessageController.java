package com.lucky.messageencoderdecoder.application.rest.controller;

import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.lucky.messageencoderdecoder.application.rest.model.Message;

@RestController
@RequestMapping(value = "messages", consumes = MediaType.APPLICATION_JSON_VALUE, produces = MediaType.APPLICATION_JSON_VALUE)
public class MessageController {

    @PutMapping
    public ResponseEntity<Void> saveMessage(@RequestBody(required = true) Message message) {

        return new ResponseEntity<>(HttpStatus.NO_CONTENT);
    }

}
