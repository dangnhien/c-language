#include "main.h"

int main()
{
    char string_begin[40];
    char character_find;

    enterString(string_begin);
    character_find = enterCharacter();

    findLocationCharacter(string_begin, character_find);

    return 0;
}

void enterString(char *data_input)
{
    char *t;

    fflush(stdin);
    printf("\nEnter string: ");
    fgets(data_input, 40, stdin);

    if ((t = strrchr(data_input, '\n')) != NULL)
        *t = '\0';
}

char enterCharacter()
{
    char data;

    fflush(stdin);
    printf("\nEnter a character need find: ");
    scanf("%c", &data);

    return data;
}

void findLocationCharacter(char *strings, char character)
{
    int counter=0, i;
    int length=0;

    while(strings[length]!='\0')
        length++;

    for(i=0; i<length; i++)
        if(strings[i] == character)
        {
            counter++;
            printf("%3d", i);
        }

    (counter != 0) ? printf("\nNumber of character in string: %d", counter) :\
                   printf("\nNot find character %c in string %s",character,  strings);
}