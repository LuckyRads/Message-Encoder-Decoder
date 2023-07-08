package com.lucky.messageencoderdecoder.domain.model.common;

import java.io.Serializable;

import lombok.AccessLevel;
import lombok.EqualsAndHashCode;
import lombok.Getter;
import lombok.RequiredArgsConstructor;

@EqualsAndHashCode
@RequiredArgsConstructor(access = AccessLevel.PROTECTED)
public abstract class Entity<T extends Serializable> {

    @Getter
    private final T id;

}
