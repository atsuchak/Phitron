#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[100], b[100];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	for(int i = 0, j = n-1; j >= 0; i++, j--) {
		a[i] = a[i] + b[j];
	}

	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);

    return 0;
}