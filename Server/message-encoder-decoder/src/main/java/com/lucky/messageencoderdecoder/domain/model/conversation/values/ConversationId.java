package com.lucky.messageencoderdecoder.domain.model.conversation.values;

import java.io.Serializable;
import java.util.UUID;

import com.lucky.messageencoderdecoder.domain.model.common.Entity;

import lombok.EqualsAndHashCode;

@EqualsAndHashCode(callSuper = true)
public class ConversationId extends Entity<UUID> implements Serializable {

    private ConversationId() {
        super(UUID.randomUUID());
    }

    public ConversationId(UUID id) {
        super(id);
    }

    public ConversationId(String id) {
        super(UUID.fromString(id));
    }

    public static ConversationId generate() {
        return new ConversationId();
    }

}
