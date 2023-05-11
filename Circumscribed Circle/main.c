#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    long factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("%d", factorial);

    return 0;
}
