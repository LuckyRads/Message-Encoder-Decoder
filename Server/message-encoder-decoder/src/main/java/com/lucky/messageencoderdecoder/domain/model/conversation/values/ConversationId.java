package com.lucky.messageencoderdecoder.domain.model.conversation.values;

import java.io.Serializable;
import java.util.UUID;

import com.lucky.messageencoderdecoder.domain.model.common.Entity;

import lombok.Getter;
import lombok.RequiredArgsConstructor;

@RequiredArgsConstructor
public class ConversationId implements Entity<UUID>, Serializable {

    @Getter
    private final UUID id;

    public static ConversationId generate() {
        return new ConversationId(UUID.randomUUID());
    }

}
