/*
 * This file is generated by jOOQ.
 */
package com.lucky.messageencoderdecoder.generated.jooq.tables.records;


import com.lucky.messageencoderdecoder.generated.jooq.tables.Messages;

import org.jooq.Field;
import org.jooq.Record1;
import org.jooq.Record2;
import org.jooq.Row2;
import org.jooq.impl.UpdatableRecordImpl;


/**
 * This class is generated by jOOQ.
 */
@SuppressWarnings({ "all", "unchecked", "rawtypes" })
public class MessagesRecord extends UpdatableRecordImpl<MessagesRecord> implements Record2<String, String> {

    private static final long serialVersionUID = 1L;

    /**
     * Setter for <code>message-encoder-decoder.messages.id</code>.
     */
    public MessagesRecord setId(String value) {
        set(0, value);
        return this;
    }

    /**
     * Getter for <code>message-encoder-decoder.messages.id</code>.
     */
    public String getId() {
        return (String) get(0);
    }

    /**
     * Setter for <code>message-encoder-decoder.messages.text</code>.
     */
    public MessagesRecord setText(String value) {
        set(1, value);
        return this;
    }

    /**
     * Getter for <code>message-encoder-decoder.messages.text</code>.
     */
    public String getText() {
        return (String) get(1);
    }

    // -------------------------------------------------------------------------
    // Primary key information
    // -------------------------------------------------------------------------

    @Override
    public Record1<String> key() {
        return (Record1) super.key();
    }

    // -------------------------------------------------------------------------
    // Record2 type implementation
    // -------------------------------------------------------------------------

    @Override
    public Row2<String, String> fieldsRow() {
        return (Row2) super.fieldsRow();
    }

    @Override
    public Row2<String, String> valuesRow() {
        return (Row2) super.valuesRow();
    }

    @Override
    public Field<String> field1() {
        return Messages.MESSAGES.ID;
    }

    @Override
    public Field<String> field2() {
        return Messages.MESSAGES.TEXT;
    }

    @Override
    public String component1() {
        return getId();
    }

    @Override
    public String component2() {
        return getText();
    }

    @Override
    public String value1() {
        return getId();
    }

    @Override
    public String value2() {
        return getText();
    }

    @Override
    public MessagesRecord value1(String value) {
        setId(value);
        return this;
    }

    @Override
    public MessagesRecord value2(String value) {
        setText(value);
        return this;
    }

    @Override
    public MessagesRecord values(String value1, String value2) {
        value1(value1);
        value2(value2);
        return this;
    }

    // -------------------------------------------------------------------------
    // Constructors
    // -------------------------------------------------------------------------

    /**
     * Create a detached MessagesRecord
     */
    public MessagesRecord() {
        super(Messages.MESSAGES);
    }

    /**
     * Create a detached, initialised MessagesRecord
     */
    public MessagesRecord(String id, String text) {
        super(Messages.MESSAGES);

        setId(id);
        setText(text);
        resetChangedOnNotNull();
    }

    /**
     * Create a detached, initialised MessagesRecord
     */
    public MessagesRecord(com.lucky.messageencoderdecoder.generated.jooq.tables.pojos.Messages value) {
        super(Messages.MESSAGES);

        if (value != null) {
            setId(value.getId());
            setText(value.getText());
            resetChangedOnNotNull();
        }
    }
}
