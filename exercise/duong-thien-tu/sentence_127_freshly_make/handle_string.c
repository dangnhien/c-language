#include "handle_string.h"

void reserver_string_given(char *string_input, char *string_result)
{
    size_t i, index;
    size_t length = 0;

    while (string_input[length] != '\0')
        length++;

    index = length;

    for (i = 0; i < length; i++)
        string_result[i] = string_input[index - 1 - i];

    string_result[i] = '\0';
}

void enter_data(char *str)
{
    char *t;

    fflush(stdin);
    printf("Enter string: ");
    fgets(str, 50, stdin);

    if ((t = strrchr(str, '\n')) != NULL)
        *t = '\0';
}

void reserver_string_enter(char *string_result)
{
    char *string_input;

    string_input = (char*)malloc(50*sizeof(char));
    enter_data(string_input);

    reserver_string_given(string_input, string_result);

    free(string_input);
    string_input = NULL;
}