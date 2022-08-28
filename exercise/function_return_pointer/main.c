#include "main.h"

int main()
{
    int array[] = {1,2,3,5,6,8};
    int valueNumber = sizeof(array)/sizeof(array[0]);

    int *mid = findMid(array, valueNumber);
    printf("%d\n", *mid);
    printf("%p\n", mid);
    printf("%p\n", &array[3]);


    // int *number = numberConst();
    // printf("%d\n", *number);

    // int sum1 = sum(array[0], array[1]);
    // printf("%d\n", sum1);

    return 0;
}


int *findMid(int *arr, int n)
{
    return &(arr[n/2]);
}

int *numberConst()
{
    static int number = 10;
    return (&number);
}

int sum(int a, int b)
{
    int c= a+b;
    return c;
}
