#include "main.h"

int main()
{

    return 0;
}

void enterString(char *str)
{
    char *t;

    printf("\nEnter string: ");
    fgets(str, 50, stdin);

    if ((t = strrchr(str, '\n')) != NULL)
        *t = '\0';
}

int length_string(char *str)
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    return length;
}

int character_convert_number(char character)
{
    int result = -1;

    switch (character)
    {
    case '0':
        result = 0;
        break;
    case '1':
        result = 1;
        break;
    case '2':
        result = 2;
        break;
    case '3':
        result = 3;
        break;
    case '4':
        result = 4;
        break;
    case '5':
        result = 5;
        break;
    case '6':
        result = 6;
        break;
    case '7':
        result = 7;
        break;
    case '8':
        result = 8;
        break;
    case '9':
        result = 9;
        break;
        default result = -1;
    }
}

char number_convert_character(int number)
{
    char result = '0';

    switch (number)
    {
    case 0:
        result = '0';
        break;
    case 1:
        result = '1';
        break;
    case 2:
        result = '2';
        break;
    case 3:
        result = '3';
        break;
    case 4:
        result = '4';
        break;
    case 5:
        result = '5';
        break;
    case 6:
        result = '6';
        break;
    case 7:
        result = '7';
        break;
    case 8:
        result = '8';
        break;
    case 9:
        result = '9';
        break;
        default result = '0';
    }
}

void multiply_hand(char *str1, char *str2)
{
    int i, j;
    int length_str1, length_str2;
    int remember = 0;

    length_str1 = length_string(str1);
    length_str2 = length_string(str2);

    char string_result[(length_str1 * 2) + (length_str2 * 2)];

    for (i = length_str1 - 1; i >= 0; i--)
        for (j = length_str2 - 1; j >= 0; j--)
        {
            
        }
}
