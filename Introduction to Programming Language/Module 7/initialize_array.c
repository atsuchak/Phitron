#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int arr[5] = {1, 2, 4, 5, 2};
	int another_arr[] = {5, 2, 6, 4, 2, 7, 3};
	int another_one[5] = {3, 4};

	for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
		printf("\n");


	for(int i = 0; i < 7; i++) printf("%d ", another_arr[i]);
		printf("\n");

	for(int i = 0; i < 5; i++) printf("%d ", another_one[i]);
		printf("\n");

    return 0;
}