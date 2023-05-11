#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
} time;

time split_time(long long total_seconds){
    time time_struct;
    time_struct.hours = total_seconds / 3600;
    total_seconds -= time_struct.hours * 3600;
    time_struct.minutes = total_seconds / 60;
    total_seconds -= time_struct.minutes * 60;
    time_struct.seconds = total_seconds;
    return time_struct;
}

int main()
{

    int total_seconds;
    scanf("%d", &total_seconds);
    while(total_seconds >= 86400){
        total_seconds %= 86400;
    }
    time t_struct = split_time(total_seconds);
    int hours = t_struct.hours;
    int minutes = t_struct.minutes;
    int seconds = t_struct.seconds;
    printf("%02d:%02d:%02d", t_struct.hours, t_struct.minutes, t_struct.seconds);

    return 0;
}
