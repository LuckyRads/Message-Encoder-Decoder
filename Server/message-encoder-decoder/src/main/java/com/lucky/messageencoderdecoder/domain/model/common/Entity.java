package com.lucky.messageencoderdecoder.domain.model.common;

import java.io.Serializable;

public interface Entity<T extends Serializable> {

    T getId();

}
