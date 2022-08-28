#include "main.h"

int main()
{
    time update;
    char str[30];

    updateData(&update, 12, 34, 60);

    concatenation_string(str, update);

    printf("%s", str);
    return 0;
}

void concatenation_string(char *string_result, time time_temp)
{
    sprintf(string_result, "%d %c %d %c %d %c %s", time_temp.hour, ':', time_temp.minute, ':', time_temp.second, '\n',"hello");
}

void updateData(time *temp, int hour, int minute, int second)
{
    (*temp).hour = hour;
    temp->minute = minute;
    temp->second = second;
}

