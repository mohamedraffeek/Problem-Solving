#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

double factorial(int num){
    long long factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    return factorial;
}



int main() {

	double x;
	int n;
	scanf("%lf %d", &x, &n);


	x = (x * M_PI) / 180;
	double ans = 0;

	// write your solution here
	int counter = 1;
	for(int i = 0; i < n; i++){
        ans += (pow(-1, i)*pow(x, counter))/factorial(counter);
        counter += 2;
	}

	printf("calculated %.10lf expected %.10lf\n", ans, sin(x));


	return 0;
}
