#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double seconds;
    scanf("%lf", &seconds);
    if(seconds >= 43200){
        seconds -= 43200;
    }
    double hours = floor(seconds / 3600);
    int hoursAngle = hours * 30;
    seconds -= hours * 3600;
    double minutes = floor(seconds / 60);
    int minutesAngle = minutes * 6;
    seconds -= minutes * 60;
    int secondsAngle = seconds * 6;
    printf("%d \n%d \n%d", hoursAngle, minutesAngle, secondsAngle);

    return 0;
}
