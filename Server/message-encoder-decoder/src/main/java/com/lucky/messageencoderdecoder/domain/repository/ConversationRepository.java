package com.lucky.messageencoderdecoder.domain.repository;

import com.lucky.messageencoderdecoder.domain.model.conversation.Conversation;
import com.lucky.messageencoderdecoder.domain.model.conversation.values.ConversationId;

public interface ConversationRepository {

    Conversation getConversation(ConversationId id);

    void saveConversation(Conversation conversation);

}
