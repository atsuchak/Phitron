#include <stdio.h>

void hello() {
	printf("Hello\n");
	hello();  //recursion
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	hello();

    return 0;
}