#include <stdio.h>
#include <stdlib.h>

int main() {


	int x, y;
	scanf("%d %d", &x, &y);
	char z;

	// check that y and x are valid
    if(x < 0 || x > 15 || y < 0 || y > 15){
        printf("Error");
        return 0;
    }

	// if valid compress them
    char cx = x;
    char cy = y;

	// do compression here using bit wise shift and or operators.
    cx = cx << 4;
    z = cx | cy;

	printf("%d\n", z);
    return 0;
}
