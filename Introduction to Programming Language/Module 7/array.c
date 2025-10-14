#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int arr[5];
	arr[2] = 10;
	arr[4] = 5;

	printf("%d\n", arr[4]);

    return 0;
}