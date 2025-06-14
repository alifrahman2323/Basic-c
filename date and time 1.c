#include <stdio.h>
#include <time.h>


int main()
{
    time_t  rawtime;
    struct tm*timeinfo;
    char buffer[30];

    time(&rawtime);
    timeinfo = gmtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%Y/%m/%d %H:%M:%S", timeinfo);

   struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    int milliseconds = ts.tv_nsec / 1000000;

    // Print the formatted time with milliseconds
    printf("Now: %s.%03d\n", buffer, milliseconds);

    return 0;
}
