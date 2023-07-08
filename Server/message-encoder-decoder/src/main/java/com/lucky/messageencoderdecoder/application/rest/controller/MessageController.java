package com.lucky.messageencoderdecoder.application.rest.controller;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@RestController(value = "/message")
public class MessageController {

    public ResponseEntity<Void> saveMessage(@RequestBody String message) {

        return new ResponseEntity<>(HttpStatus.NO_CONTENT);
    }

}
