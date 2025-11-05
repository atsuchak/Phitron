#include <stdio.h>

void swap_it(int *a, int *b) {
	int temp = *a; 
	*a = *b; 
	*b = temp;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b;
	scanf("%d %d", &a, &b);

	swap_it(&a, &b);

	printf("%d %d", a, b);

    return 0;
}