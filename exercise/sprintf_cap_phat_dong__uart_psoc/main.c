#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int size_number_lib(long  number);

int main()
{
    // int count = size_number_lib(123456);
    // printf("%d", count);

    transmit_number_type(2100000000);

    return 0;
}

int size_number(int number)
{
    int count = 0;

    while (number != 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

int size_number_lib(long  number)
{
    return (sizeof(number));
    //return (sizeof(number)/sizeof(long long));
}

void transmit_number_type(int number_need_transmit)
{
    char *str;

    int _size = size_number(number_need_transmit);

    str = (char *)malloc(_size * sizeof(int));

    sprintf(str, "String just enter is : %d.", number_need_transmit);
    printf("%s", str);

    free(str);
    str = NULL;
}