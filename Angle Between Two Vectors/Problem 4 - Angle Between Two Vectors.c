#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265

int main()
{

    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double mag1 = sqrt(pow(x1, 2) + pow(y1, 2));
    double mag2 = sqrt(pow(x2, 2) + pow(y2, 2));
    double dotproduct = x1*x2 + y1*y2;
    double angle = acos(dotproduct/(mag1*mag2));
    angle = (angle*180)/pi;
    angle = floor(angle);
    printf("%.00f", angle);

    return 0;
}
