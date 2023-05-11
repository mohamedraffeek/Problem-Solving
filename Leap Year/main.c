#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int year, a, b, c;
    scanf("%d", &year);
    a = year % 4;
    b = year % 100;
    c = year % 400;
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("Leap");
            }else{
                printf("Not Leap");
            }
        }else{
            printf("Leap");
        }
    }else{
        printf("Not Leap");
    }

    return 0;
}
