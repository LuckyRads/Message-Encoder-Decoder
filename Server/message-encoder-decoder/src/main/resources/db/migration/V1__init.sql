CREATE TABLE
    IF NOT EXISTS messages (
        id VARCHAR(45) NOT NULL,
        text TEXT NOT NULL,
        PRIMARY KEY (id)
    );

CREATE TABLE
    IF NOT EXISTS users (
        id VARCHAR(45) NOT NULL,
        email VARCHAR(255) NOT NULL,
        username VARCHAR(255) NOT NULL UNIQUE,
        password VARCHAR(255) NOT NULL,
        PRIMARY KEY (id)
    );

CREATE TABLE
    IF NOT EXISTS conversations (
        id VARCHAR(45) NOT NULL,
        user_id VARCHAR(45) NOT NULL,
        message_id VARCHAR(45) NOT NULL,
        PRIMARY KEY(id),
        CONSTRAINT FK_USER_CONVERSATION FOREIGN KEY (user_id) REFERENCES users(id) ON UPDATE CASCADE ON DELETE CASCADE,
        CONSTRAINT FK_CONVERSATION_MESSAGE FOREIGN KEY (message_id) REFERENCES messages(id) ON UPDATE CASCADE ON DELETE CASCADE
    );