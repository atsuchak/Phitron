#include <stdio.h>

void print_arr(int arr[], int n, int i) {
	if(i == n) return;

	printf("%d ", arr[i]);
	print_arr(arr, n, i+1);
}

void reverse_print(int arr[], int n) {
	if(n == -1) return;

	printf("%d ", arr[n]);
	reverse_print(arr, n-1);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	print_arr(arr, n, 0);
	printf("\n");
	reverse_print(arr, n-1);

    return 0;
}