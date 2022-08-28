#include "main.h"

int main()
{
    Times times;

    int result = readData(&times.minute);

    printf("\n%d", times.minute);

    return 0;
}

int readData(int *byteRead)
{
    int a=10, b=34;
    a+=b;

    *byteRead = a;

    return a;
}