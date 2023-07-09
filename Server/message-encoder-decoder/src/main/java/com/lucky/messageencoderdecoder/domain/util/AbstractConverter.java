package com.lucky.messageencoderdecoder.domain.util;

import java.util.function.Function;

import lombok.AccessLevel;
import lombok.NoArgsConstructor;

@NoArgsConstructor(access = AccessLevel.PROTECTED)
public abstract class AbstractConverter {

    protected static <T, R> R convertNullable(T value, Function<T, R> converter) {
        return value == null ? null : converter.apply(value);
    }

}
