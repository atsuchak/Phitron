#include <stdio.h>

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int sum = 0;
	for(int i = 0; i < n; i++) sum += arr[i];

	printf("%d", sum);

	return 0;
}