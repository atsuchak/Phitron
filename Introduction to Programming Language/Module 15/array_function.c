#include <stdio.h>

void func(int a[], int n) {
	a[2] = 500;

	printf("Adress in func: %p\n", a);

	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n = 5;

	int a[n];
	int x = 1;
	for(int i = 0; i < n; i++) {
		a[i] = x; 
		x += 2;
	}

	printf("Adress in main: %p\n", a);
	func(a, n);

    return 0;
}