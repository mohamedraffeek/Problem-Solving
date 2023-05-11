#include <stdio.h>
#include <stdlib.h>

// print array of size n
void print_array(int a[], int n) {
	int i = 0;
	while(i < n - 1 && a[i] == 0)i++;
	while(i < n) {
		printf("%d",a[i]);
		i++;
	}
	printf("\n");
}

// scans a single integer into array with size n
void scan_array(int a[], int n) {
	for(int i = 0; i < n; i++) {
		scanf("%1d", &a[i]);
	}
}

// the multiplication operation
// it is better to split the logic on several other functions
// then make multiply function call them.

void initializeAns(int t, int r[]){
    for(int i = 0; i < t; ++i){
        r[i] = 0;
    }
}

void multiplyElements(int a[], int n, int b[], int m, int r[]){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            r[i + j] += a[i] * b[j];
        }
    }
}

void addCarries(int t, int r[]){
    for(int i = 0; i < t-1; ++i){
        int temp = r[i] / 10;
        r[i] = r[i] % 10;
        r[i + 1] += temp;
    }
}

void reverse(int t, int r[]){
    for(int i = 0; i < t / 2; ++i){
        int temp = r[i];
        r[i] = r[t - i - 1];
        r[t - i - 1] = temp;
    }
}

void multiply(int a[], int n, int b[], int m, int r[], int t){
    initializeAns(t, r);
    reverse(n, a);
    reverse(m, b);
    multiplyElements(a, n, b, m, r);
    addCarries(t, r);
    reverse(t, r);
}

// don't change any thing in the main
int main() {

	int n;
	scanf("%d", &n);
	int x[n];
	scan_array(x, n);

	int m;
	scanf("%d", &m);
	int y[m];
	scan_array(y, m);

	int t = n + m;
	int ans[t];

	multiply(x, n, y, m, ans, t);
	print_array(ans, t);

	return 0;
}
