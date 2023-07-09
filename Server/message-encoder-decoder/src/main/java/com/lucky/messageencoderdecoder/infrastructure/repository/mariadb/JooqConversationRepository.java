package com.lucky.messageencoderdecoder.infrastructure.repository.mariadb;

import static com.lucky.messageencoderdecoder.generated.jooq.tables.Conversations.CONVERSATIONS;

import org.jooq.DSLContext;
import org.springframework.stereotype.Repository;

import com.lucky.messageencoderdecoder.domain.model.conversation.Conversation;
import com.lucky.messageencoderdecoder.domain.model.conversation.values.ConversationId;
import com.lucky.messageencoderdecoder.domain.repository.ConversationRepository;
import com.lucky.messageencoderdecoder.generated.jooq.tables.records.ConversationsRecord;

import lombok.RequiredArgsConstructor;

@Repository
@RequiredArgsConstructor
public class JooqConversationRepository implements ConversationRepository {

    private final DSLContext dslContext;

    @Override
    public Conversation getConversation(ConversationId id) {
        var conversationsRecord = dslContext
                .select(CONVERSATIONS.ID, CONVERSATIONS.USER_ID, CONVERSATIONS.MESSAGE_ID)
                .from(CONVERSATIONS)
                .where(CONVERSATIONS.ID.eq(id.getId().toString()))
                .fetchOneInto(ConversationsRecord.class);
        return new Conversation(new ConversationId(conversationsRecord.getId()));
    }

    @Override
    public void saveConversation(Conversation conversation) {
        var optionalConversationsRecord = dslContext
                .select(CONVERSATIONS.ID, CONVERSATIONS.USER_ID, CONVERSATIONS.MESSAGE_ID)
                .from(CONVERSATIONS)
                .where(CONVERSATIONS.ID.eq(conversation.getId().getId().toString()))
                .fetchOptionalInto(ConversationsRecord.class);

        var conversationsRecord = optionalConversationsRecord.orElseGet(() -> {
            var newConversationsRecord = dslContext.newRecord(CONVERSATIONS);
            newConversationsRecord.setId(conversation.getId().getId().toString());
            return newConversationsRecord;
        });
        // TODO
        conversationsRecord.setMessageId("");
        conversationsRecord.setUserId("");
        conversationsRecord.store();
    }
}
