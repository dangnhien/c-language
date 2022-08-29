#include "main.h"

int main()
{
    char string_1[] = "yeu than ky 6";
    char *string_2 = NULL;
    char *string_3 = NULL;

    string_2 = (char *)malloc(100 * sizeof(char));
    string_3 = (char *)malloc(100 * sizeof(char));


    reserver_string_given(string_1, string_2);
    printf("\n%s", string_2);

    reserver_string_enter(string_3);
    printf("\n%s", string_3);

    free(string_2);
    string_2 = NULL;

    free(string_3);
    string_3 = NULL;
}

