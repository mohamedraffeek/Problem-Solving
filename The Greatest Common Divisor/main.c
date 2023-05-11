#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b, divs1[4] = {0, 0, 0, 0}, divs2[4] = {0, 0, 0, 0}, counterA = 0, counterB = 0, primeA = 0, primeB = 0, max = 0;
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
    while(a > 1){
        if(a % 2 == 0){
            divs1[0]++;
            a /= 2;
        }else if(a % 3 == 0){
            divs1[1]++;
            a /= 3;
        }else if(a % 5 == 0){
            divs1[2]++;
            a /= 5;
        }else if(a % 7 == 0){
            divs1[3]++;
            a /= 7;
        }else{
            primeA = 1;
            break;
        }
    }
    while(b > 1){
        if(b % 2 == 0){
            divs2[0]++;
            b /= 2;
        }else if(b % 3 == 0){
            divs2[1]++;
            b /= 3;
        }else if(b % 5 == 0){
            divs2[2]++;
            b /= 5;
        }else if(b % 7 == 0){
            divs2[3]++;
            b /= 7;
        }else{
            primeB = 1;
            break;
        }
    }
    int divisorsOf_a[(divs1[0]+1)*(divs1[1]+1)*(divs1[2]+1)*(divs1[3]+1)*(primeA + 1)], divisorsOf_b[(divs2[0]+1)*(divs2[1]+1)*(divs2[2]+1)*(divs2[3]+1)*(primeB+1)];
    for(int i = 0; i <= divs1[3]; ++i){
        for(int j = 0; j <= divs1[2]; ++j){
            for(int k = 0; k <= divs1[1]; ++k){
                for(int l = 0; l <= divs1[0]; ++l){
                    divisorsOf_a[counterA++] = pow(2, l) * pow(3, k) * pow(5, j) * pow(7, i);
                }
            }
        }
    }
    if(primeA == 1){
        divisorsOf_a[counterA++] = a;
    }
    for(int i = 0; i <= divs2[3]; ++i){
        for(int j = 0; j <= divs2[2]; ++j){
            for(int k = 0; k <= divs2[1]; ++k){
                for(int l = 0; l <= divs2[0]; ++l){
                    divisorsOf_b[counterB++] = pow(2, l) * pow(3, k) * pow(5, j) * pow(7, i);
                }
            }
        }
    }
    if(primeB == 1){
        divisorsOf_b[counterB++] = b;
    }
    for(int i = 0; i < counterA; ++i){
        for(int j = 0; j < counterB; ++j){
            if(divisorsOf_a[i] == divisorsOf_b[j] && divisorsOf_a[i] > max){
                max = divisorsOf_a[i];
                continue;
            }
        }
    }
    printf("%d", max);

    return 0;
}
