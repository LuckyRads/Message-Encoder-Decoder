package com.lucky.messageencoderdecoder.infrastructure.repository.mariadb;

import org.springframework.stereotype.Repository;

import com.lucky.messageencoderdecoder.domain.model.conversation.Conversation;
import com.lucky.messageencoderdecoder.domain.model.conversation.values.ConversationId;
import com.lucky.messageencoderdecoder.domain.repository.ConversationRepository;

import lombok.RequiredArgsConstructor;

@Repository
@RequiredArgsConstructor
public class JooqConversationRepository implements ConversationRepository {

    @Override
    public Conversation getConversation(ConversationId id) {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public void saveConversation(Conversation conversation) {
        // TODO Auto-generated method stub

    }

}
