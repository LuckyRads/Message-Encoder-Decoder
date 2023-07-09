/*
 * This file is generated by jOOQ.
 */
package com.lucky.messageencoderdecoder.generated.jooq.tables.pojos;


import java.io.Serializable;


/**
 * This class is generated by jOOQ.
 */
@SuppressWarnings({ "all", "unchecked", "rawtypes" })
public class Users implements Serializable {

    private static final long serialVersionUID = 1L;

    private final String id;
    private final String email;
    private final String username;
    private final String password;

    public Users(Users value) {
        this.id = value.id;
        this.email = value.email;
        this.username = value.username;
        this.password = value.password;
    }

    public Users(
        String id,
        String email,
        String username,
        String password
    ) {
        this.id = id;
        this.email = email;
        this.username = username;
        this.password = password;
    }

    /**
     * Getter for <code>message-encoder-decoder.users.id</code>.
     */
    public String getId() {
        return this.id;
    }

    /**
     * Getter for <code>message-encoder-decoder.users.email</code>.
     */
    public String getEmail() {
        return this.email;
    }

    /**
     * Getter for <code>message-encoder-decoder.users.username</code>.
     */
    public String getUsername() {
        return this.username;
    }

    /**
     * Getter for <code>message-encoder-decoder.users.password</code>.
     */
    public String getPassword() {
        return this.password;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        final Users other = (Users) obj;
        if (this.id == null) {
            if (other.id != null)
                return false;
        }
        else if (!this.id.equals(other.id))
            return false;
        if (this.email == null) {
            if (other.email != null)
                return false;
        }
        else if (!this.email.equals(other.email))
            return false;
        if (this.username == null) {
            if (other.username != null)
                return false;
        }
        else if (!this.username.equals(other.username))
            return false;
        if (this.password == null) {
            if (other.password != null)
                return false;
        }
        else if (!this.password.equals(other.password))
            return false;
        return true;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((this.id == null) ? 0 : this.id.hashCode());
        result = prime * result + ((this.email == null) ? 0 : this.email.hashCode());
        result = prime * result + ((this.username == null) ? 0 : this.username.hashCode());
        result = prime * result + ((this.password == null) ? 0 : this.password.hashCode());
        return result;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("Users (");

        sb.append(id);
        sb.append(", ").append(email);
        sb.append(", ").append(username);
        sb.append(", ").append(password);

        sb.append(")");
        return sb.toString();
    }
}
