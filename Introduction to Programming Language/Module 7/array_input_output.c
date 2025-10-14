#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int arr[5];

	//manual
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("\n");

	//using loop
	for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);
	for(int i = 0; i < 5; i++) printf("%d ", arr[i]);


    return 0;
}