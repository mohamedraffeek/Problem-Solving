#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input by scanf. Print output by printf.
       Don't use any additional printf. Don't make any additional space while printing.
       Print the words as they are, Capital is Capital and small is small.
    */
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    int x;
    int y = 0, z = 0;
    int flag = 1;
    for(int i = 0; i < n1; i++){
        scanf("%d", &x);
        for(int j = 0; j < y; j++){
            if(arr1[j] == x){
                flag = 0;
            }
        }
        if(flag){
            arr1[y] = x;
            y++;
        }else{
            flag = 1;
        }
    }
    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        scanf("%d", &x);
        for(int j = 0; j < z; j++){
            if(arr2[j] == x){
                flag = 0;
            }
        }
        if(flag){
            arr2[z] = x;
            z++;
        }else{
            flag = 1;
        }
    }
    int u[40];
    int f = y;
    for(int i = 0; i < y; i++){
        u[i] = arr1[i];
    }
    for(int i = 0; i < z; i++){
        u[f] = arr2[i];
        f++;
    }
    int uf[f];
    int q = 0;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < i; j++){
            if(u[i] == uf[j]){
                flag = 0;
            }
        }
        if(flag){
            uf[q] = u[i];
            q++;
        }else{
            flag = 1;
        }
    }
    int dot[20];
    int d = 0;
    for(int i = 0; i < y; i++){
        for(int j = 0; j < z; j++){
            if(arr1[i] == arr2[j]){
                dot[d] = arr1[i];
                d++;
            }
        }
    }
    printf("Array1: ");
    for(int i = 0; i < y; i++){
        if(i == y-1){
            printf("%d", arr1[i]);
        }else{
            printf("%d, ", arr1[i]);
        }
    }
    printf("\n");
    printf("Array2: ");
    for(int i = 0; i < z; i++){
        if(i == z-1){
            printf("%d", arr2[i]);
        }else{
            printf("%d, ", arr2[i]);
        }
    }
    printf("\n");
    printf("Union: ");
    for(int i = 0; i < q; i++){
        if(i == q-1){
            printf("%d", uf[i]);
        }else{
            printf("%d, ", uf[i]);
        }
    }
    printf("\n");
    printf("Intersection: ");
    for(int i = 0; i < d; i++){
        if(i == d-1){
            printf("%d", dot[i]);
        }else{
            printf("%d, ", dot[i]);
        }
    }

    return 0;
}
