#ifndef MAIN_H
#define MAIN_H

	#include <stdio.h>

    typedef struct Time
    {
        int second;
        int minute;
        int hour;
    }time;

    void concatenation_string(char *string_result, time time_temp);
    void updateData(time *temp, int hour, int minute, int second);

#endif