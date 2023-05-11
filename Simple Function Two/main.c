#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digit(int n, int k){
    n = n % (int)pow(10, k);
    n /= pow(10, k-1);
    return n;
}

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    int ans = digit(n, k);
    printf("%d", ans);

    return 0;
}
