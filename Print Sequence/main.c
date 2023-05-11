#include <stdio.h>
#include <stdlib.h>

void print_nums(int n){
    if(n > 1){
        print_nums(n - 1);
    }
    printf("%d ", n);
}

int main()
{

    int n;
    scanf("%d", &n);
    print_nums(n);

    return 0;
}
