#include <stdio.h>

void count_odd(int a[], int n) {
	
	a[n-1] = 100;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	count_odd(a, n);

	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);

    return 0;
}