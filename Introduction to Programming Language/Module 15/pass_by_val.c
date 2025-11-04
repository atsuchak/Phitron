#include <stdio.h>

void func(int a) {
	a = 20;


	printf("Value of a(func): %d\n", a);
	printf("Adress of a(func): %p\n", &a);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a = 10;

	func(a);

	printf("Value of a(main): %d\n", a);
	printf("Adress of a(main): %p\n", &a);

	//both are functions address are different

    return 0;
}