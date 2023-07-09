package com.lucky.messageencoderdecoder.domain.model.conversation;

import com.lucky.messageencoderdecoder.domain.model.common.AggregateRoot;
import com.lucky.messageencoderdecoder.domain.model.conversation.values.ConversationId;

import lombok.EqualsAndHashCode;

@EqualsAndHashCode(callSuper = true)
public class Conversation extends AggregateRoot<ConversationId> {

    public Conversation(ConversationId id) {
        super(id);
    }

}
