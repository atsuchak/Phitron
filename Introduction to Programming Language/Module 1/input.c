#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a;
	float f;
	char ch;

	scanf("%d %f %c", &a, &f, &ch);  //take input from user

	printf("%d %f %c", a, f, ch);

    return 0;
}