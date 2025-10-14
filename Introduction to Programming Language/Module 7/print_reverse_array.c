#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int arr[n];

	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	for(int i = n-1; i >= 0; i--) printf("%d ", arr[i]);

    return 0;
}