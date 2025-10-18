#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int arr[n+1];
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int idx;
	scanf("%d", &idx);

	for(int i = idx; i < n-1; i++) // i >= idx+1
		arr[i] = arr[i+1];

	n--;
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);


    return 0;
}