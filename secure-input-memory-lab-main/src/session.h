#ifndef SESSION_H
#define SESSION_H

typedef struct session
{
	char *user;
	int access_level;
} session_t;

/**
 * session_create - Creates a session borrowing a username pointer
 * @username: Username owned by the caller
 *
 * Description: The session stores the username pointer without copying it.
 * The caller must keep the string valid for the entire session lifetime and
 * remains responsible for freeing it.
 *
 * Return: A pointer to the new session, or NULL on failure
 */
session_t *session_create(char *username);

/**
 * session_print - Prints session information
 * @session: Pointer to the session
 *
 * Return: Nothing
 */
void session_print(session_t *session);

/**
 * session_destroy - Frees the session structure
 * @session: Pointer to the session to destroy
 *
 * Description: Frees only the session structure. The username is borrowed
 * and remains owned by the caller.
 *
 * Return: Nothing
 */
void session_destroy(session_t *session);

#endif