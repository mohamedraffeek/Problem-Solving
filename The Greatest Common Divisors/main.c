#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0){
        printf("%d", b);
        return 0;
    }else if(b == 0){
        printf("%d", a);
        return 0;
    }
    a = abs(a);
    b = abs(b);
    while(a != b){
        if(a > b){
            a -= b;
        }else if(b > a){
            b -= a;
        }
    }
    printf("%d", a);

    return 0;
}
