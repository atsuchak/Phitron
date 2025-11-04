#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a[5] = {4, 5, 2, 6, 1};
	printf("1st index adress: %p\n", &a[0]);
	printf("2nd index adress: %p\n", &a[1]);
	printf("3rd index adress: %p\n", &a[2]);
	printf("4th index adress: %p\n", &a[3]);
	printf("5th index adress: %p\n", &a[4]);

	printf("Address of array: %p\n", a); //array adress == a[0] adrress
	printf("Value of array: %d\n", *a);

	*a = 50;
	*(a+2) = 60;
	for(int i = 0; i < 5; i++) 
		printf("%d ", a[i]);
	printf("\n");

    return 0;
}