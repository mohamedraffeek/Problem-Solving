#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x;
    scanf("%d", &x);
    int flag = 0;
    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            flag++;
        }
        if(flag == 3){
            printf("%d is not prime", x);
            return 0;
        }
    }
    if(flag == 2){
        printf("%d is prime", x);
    }else{
        printf("%d is not prime", x);
    }

    return 0;
}
