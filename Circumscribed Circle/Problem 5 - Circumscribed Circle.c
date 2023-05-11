#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265

int main()
{

    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    double s = (s1+s2+s3)/2.0;
    double radius = (s1*s2*s3)/(4*sqrt(s*(s-s1)*(s-s2)*(s-s3)));
    double area = pi * pow(radius, 2);
    area = floor(area);
    printf("%.00f", area);

    return 0;
}
