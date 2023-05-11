#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);

 /*write your solution here. don't creat any other variables and use only xor*/
    a ^= b;
    b ^= a;
    a ^= b;

	printf("%d %d", a, b);
	return 0;
}
