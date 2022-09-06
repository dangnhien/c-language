#include <stdio.h>
#include <string.h>

#include "main.h"

int main()
{
    char str[50];
    int maxLength = 0;

    inputString(str);

    printfWordMaxLong(str,  wordMaxLong(str));

    return 0;
}

void inputString(char *str)
{
    char *t;

    printf("Enter string: ");
    fgets(str, 50, stdin);
    if ((t = strrchr(str, '\n')) != 0)
        *t = '\0';
}

int lengthString(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;

    return length;
}

int wordMaxLong(char *str)
{
    int count_old = 0, count_new = 0;
    int k = 0;

    while (str[k] != '\0')
    {
        if (str[k] != ' ')
        {
            count_new++;
        }

        if (count_new > count_old)
            count_old = count_new;

        if (str[k + 1] == '\0' || str[k] == ' ')
            count_new = 0;

        k++;
    }

    return count_old;
}

void printfWordMaxLong(char *str, int lengthMax)
{
    int k = 0, i = 0;
    int location = 0;
    int count = 0;

    printf("\nWords have length max:\n");

    while (str[k] != '\0')
    {
        while (str[k] != ' ' && str[k] != '\0')
        {
            count++;
            k++;
        }

        if (count == lengthMax)
        {
            for (i = location; i <= (location + count); i++)
                printf("%c", str[i]);
            printf("\n");
        }

        location += (count + 1);

        count = 0;
        k++;
    }
}
