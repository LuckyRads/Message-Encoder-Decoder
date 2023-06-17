DROP TABLE IF EXISTS messages, users, chats;

CREATE TABLE
    messages (
        id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
        message VARCHAR(255) NOT NULL
    );

CREATE TABLE
    users (
        id INT NOT NULL AUTO_INCREMENT,
        email VARCHAR(255) NOT NULL,
        username VARCHAR(255) NOT NULL,
        password VARCHAR(255) NOT NULL,
        PRIMARY KEY (id)
    );

CREATE TABLE
    chats (
        id INT NOT NULL AUTO_INCREMENT,
        user_id INT NOT NULL,
        message_id INT NOT NULL,
        PRIMARY KEY(id),
        CONSTRAINT FK_USER_CHAT FOREIGN KEY (user_id) REFERENCES users(id) ON UPDATE CASCADE ON DELETE CASCADE,
        CONSTRAINT FK_CHAT_MESSAGE FOREIGN KEY (message_id) REFERENCES messages(id) ON UPDATE CASCADE ON DELETE CASCADE
    )