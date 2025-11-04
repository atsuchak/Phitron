#include <stdio.h>

void func(char ch[]) {

	printf("Adress in func: %p\n", ch);

		printf("%s ", ch);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[10] = "Hello";

	printf("Adress in main: %p\n", ch);
	func(ch);

    return 0;
}