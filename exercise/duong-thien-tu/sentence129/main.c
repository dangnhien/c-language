#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

int main()
{
    system("cls");

    char string_handle[50];
    int length = 0;

    enter_string(string_handle);
    
    length = length_string(string_handle);
    printf("\nString input = %s - length = %d", string_handle, length);


    shift_character(string_handle, 3, &length);

    delete_character_not_number(string_handle);

    number_max_in_string(string_handle);

    printf("\nResult finish = %s",string_handle);

    return 0;
}

void enter_string(char *str)
{
    char *t;
    printf("Enter string: ");
    fflush(stdin);
    fgets(str, 80, stdin);
    if ((t = strrchr(str, '\n')) != NULL)
        *t = '\0';
}

int length_string(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

void shift_character(char *str, int location_delete, int *length_str)
{
    int i;

    for (i = location_delete; i < (*length_str); i++)
        str[i] = str[i + 1];

    str[i] = '\0';

    (*length_str)--;
}

void delete_character_not_number(char *str)
{
    int i = 0;
    int length = length_string(str);

    while (str[i] != '\0')
    {
        if (str[i] < 48 || str[i] > 57)
            shift_character(str, i, &length);
        else
            i++;
    }
}

void number_max_in_string(char *str)
{
    int i;
    int max;
    int length = length_string(str);
    char temp[5];

    // number thousand
    for (i = 0, max = 0; i < length - (3 - 0); i++)
        if (str[i] > max)
            max = str[i];
    temp[0] = max;

    // number hundred
    for (i = 1, max = 0; i < length - (3 - 1); i++)
        if (str[i] > max)
            max = str[i];
    temp[1] = max;

    // number dozen
    for (i = 2, max = 0; i < length - (3 - 2); i++)
        if (str[i] > max)
            max = str[i];
    temp[2] = max;

    // number unit
    for (i = 3, max=0; i < length - (3 - 3); i++)
        if (str[i] > max)
            max = str[i];
    temp[3] = max;

    // remains
    i = 0;
    while (str[i] != '\0')
    {
        str[i] = '\0';
        i++;
    }

    // for(i=0; i<4; i++)
    //     strcpy(&str[i], &temp[i]);

    printf("\nresult %s", temp);
}