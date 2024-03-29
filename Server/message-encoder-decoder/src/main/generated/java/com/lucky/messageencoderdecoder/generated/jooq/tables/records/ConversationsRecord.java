/*
 * This file is generated by jOOQ.
 */
package com.lucky.messageencoderdecoder.generated.jooq.tables.records;


import com.lucky.messageencoderdecoder.generated.jooq.tables.Conversations;

import org.jooq.Field;
import org.jooq.Record1;
import org.jooq.Record3;
import org.jooq.Row3;
import org.jooq.impl.UpdatableRecordImpl;


/**
 * This class is generated by jOOQ.
 */
@SuppressWarnings({ "all", "unchecked", "rawtypes" })
public class ConversationsRecord extends UpdatableRecordImpl<ConversationsRecord> implements Record3<String, String, String> {

    private static final long serialVersionUID = 1L;

    /**
     * Setter for <code>message-encoder-decoder.conversations.id</code>.
     */
    public ConversationsRecord setId(String value) {
        set(0, value);
        return this;
    }

    /**
     * Getter for <code>message-encoder-decoder.conversations.id</code>.
     */
    public String getId() {
        return (String) get(0);
    }

    /**
     * Setter for <code>message-encoder-decoder.conversations.user_id</code>.
     */
    public ConversationsRecord setUserId(String value) {
        set(1, value);
        return this;
    }

    /**
     * Getter for <code>message-encoder-decoder.conversations.user_id</code>.
     */
    public String getUserId() {
        return (String) get(1);
    }

    /**
     * Setter for <code>message-encoder-decoder.conversations.message_id</code>.
     */
    public ConversationsRecord setMessageId(String value) {
        set(2, value);
        return this;
    }

    /**
     * Getter for <code>message-encoder-decoder.conversations.message_id</code>.
     */
    public String getMessageId() {
        return (String) get(2);
    }

    // -------------------------------------------------------------------------
    // Primary key information
    // -------------------------------------------------------------------------

    @Override
    public Record1<String> key() {
        return (Record1) super.key();
    }

    // -------------------------------------------------------------------------
    // Record3 type implementation
    // -------------------------------------------------------------------------

    @Override
    public Row3<String, String, String> fieldsRow() {
        return (Row3) super.fieldsRow();
    }

    @Override
    public Row3<String, String, String> valuesRow() {
        return (Row3) super.valuesRow();
    }

    @Override
    public Field<String> field1() {
        return Conversations.CONVERSATIONS.ID;
    }

    @Override
    public Field<String> field2() {
        return Conversations.CONVERSATIONS.USER_ID;
    }

    @Override
    public Field<String> field3() {
        return Conversations.CONVERSATIONS.MESSAGE_ID;
    }

    @Override
    public String component1() {
        return getId();
    }

    @Override
    public String component2() {
        return getUserId();
    }

    @Override
    public String component3() {
        return getMessageId();
    }

    @Override
    public String value1() {
        return getId();
    }

    @Override
    public String value2() {
        return getUserId();
    }

    @Override
    public String value3() {
        return getMessageId();
    }

    @Override
    public ConversationsRecord value1(String value) {
        setId(value);
        return this;
    }

    @Override
    public ConversationsRecord value2(String value) {
        setUserId(value);
        return this;
    }

    @Override
    public ConversationsRecord value3(String value) {
        setMessageId(value);
        return this;
    }

    @Override
    public ConversationsRecord values(String value1, String value2, String value3) {
        value1(value1);
        value2(value2);
        value3(value3);
        return this;
    }

    // -------------------------------------------------------------------------
    // Constructors
    // -------------------------------------------------------------------------

    /**
     * Create a detached ConversationsRecord
     */
    public ConversationsRecord() {
        super(Conversations.CONVERSATIONS);
    }

    /**
     * Create a detached, initialised ConversationsRecord
     */
    public ConversationsRecord(String id, String userId, String messageId) {
        super(Conversations.CONVERSATIONS);

        setId(id);
        setUserId(userId);
        setMessageId(messageId);
        resetChangedOnNotNull();
    }

    /**
     * Create a detached, initialised ConversationsRecord
     */
    public ConversationsRecord(com.lucky.messageencoderdecoder.generated.jooq.tables.pojos.Conversations value) {
        super(Conversations.CONVERSATIONS);

        if (value != null) {
            setId(value.getId());
            setUserId(value.getUserId());
            setMessageId(value.getMessageId());
            resetChangedOnNotNull();
        }
    }
}
