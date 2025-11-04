#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a = 5;

	printf("Value of a: %d\n", a);
	printf("Adress of a: %p\n", &a);

	int* ptr = &a;

	*ptr = 20;  //change value using pointer

	printf("Pointer of a: %p\n", ptr);
	printf("Address of Pointer: %p\n", &ptr);
	printf("Value inside Pointer: %d\n", *ptr);

    return 0;
}