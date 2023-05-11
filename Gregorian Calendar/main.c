#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m;
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    scanf("%d", &m);
    for(int i = 1; i <= 12; i++){
        if(m == i){
            printf("%s", months[i-1]);
            return 0;
        }
    }
    printf("Error");

    return 0;
}


/* Another Solution using Switch statments:

int main() {

    int m;
    scanf("%d", &m);
    switch(m) {
        case 1 :
            printf("January");
            break;
        case 2 :
            printf("February");
            break;
        case 3 :
            printf("March");
            break;
        case 4 :
            printf("April");
            break;
        case 5 :
            printf("May");
            break;
        case 6 :
            printf("June");
            break;
        case 7 :
            printf("July");
            break;
        case 8 :
            printf("August");
            break;
        case 9 :
            printf("September");
            break;
        case 10 :
            printf("October");
            break;
        case 11 :
            printf("November");
            break;
        case 12 :
            printf("December");
            break;
        default :
            printf("Error");
    }

}
*/


