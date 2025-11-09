#include <stdio.h>


void cello() {
	printf("Cello\n");
}

void mello() {
	printf("Mello\n");
	cello();
}

void gello() {
	printf("Gello\n");
	mello();
}

void hello() {
	printf("Hello\n");
	gello();
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	hello();

    return 0;
}