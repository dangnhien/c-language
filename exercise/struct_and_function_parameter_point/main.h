#ifndef MAIN_H
#define MAIN_H

    #include <stdio.h>

    typedef struct Time
    {
        int second;
        int minute;
    }Times;   

    int readData(int *byteRead);

#endif