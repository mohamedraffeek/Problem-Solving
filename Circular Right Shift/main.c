#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    scanf("%d %d", &n, &k);
    if(k >= n && n != 0){
        k %= n;
    }
    int Arr[n];
    int ArrSpare[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &Arr[i]);
        ArrSpare[i] = Arr[i];
    }
    int Arr2[n];
    int x = 0;
    int i = 0;
    for(i; i < n; i++){
        if(i+k < n){
            Arr2[i] = Arr[i+k];
            x++;
            Arr[i+k] = ArrSpare[i];
        }else{
            Arr[i+k-n] = ArrSpare[i];
        }
    }
    int s = i+k-n;
    for(int j = 0; i < x; j++){
        Arr[s] = Arr2[i];
        s++;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", Arr[i]);
    }

    return 0;
}
