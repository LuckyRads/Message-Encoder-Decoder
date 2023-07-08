package com.lucky.messageencoderdecoder.domain.model.common;

import java.io.Serializable;

import lombok.EqualsAndHashCode;

@EqualsAndHashCode(callSuper = true)
public abstract class AggregateRoot<T extends Serializable> extends Entity<T> {

    protected AggregateRoot(T id) {
        super(id);
    }

}
