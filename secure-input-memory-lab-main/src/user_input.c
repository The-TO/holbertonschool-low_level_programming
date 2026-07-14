#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user_input.h"

char *read_username(void)
{
    char buffer[32];
    char *username;
    int result;

    printf("Enter username: ");
    result = scanf("%31s", buffer);
	if (result != 1)
	{
		return (NULL);
	}
    username = malloc(strlen(buffer) + 1);
    if (username == NULL)
        return NULL;

    strcpy(username, buffer);
    return username;
}
