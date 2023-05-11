#include <stdio.h>
#include <stdlib.h>

int fib(int nth_term){
    if(nth_term == 0){
        return 0;
    }else if(nth_term == 1){
        return 1;
    }else if(nth_term == 2){
        return 1;
    }else{
        return fib(nth_term - 1) + fib(nth_term - 2);
    }

}

int main()
{

    int n;
    scanf("%d", &n);
    printf("Fibonacci of %d = %d", n, fib(n));

    return 0;
}
