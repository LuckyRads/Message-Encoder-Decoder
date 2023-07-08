package com.lucky.messageencoderdecoder.domain.model.common;

import java.io.Serializable;

import lombok.AccessLevel;
import lombok.Getter;
import lombok.RequiredArgsConstructor;

@RequiredArgsConstructor(access = AccessLevel.PROTECTED)
public abstract class AggregateRoot<T extends Serializable> implements Entity<T> {

    @Getter()
    private final T id;

}
