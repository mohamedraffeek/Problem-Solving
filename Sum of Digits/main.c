#include <stdio.h>
#include <stdlib.h>

long long sum(long long n){
    if(n == 0){
        return 0;
    }else{
        return (n % 10) + sum(n / 10);
    }
}

int main()
{

    long long n;
    scanf("%lld", &n);
    printf("Sum of digits of %lld = %lld", n, sum(n));

    return 0;
}
