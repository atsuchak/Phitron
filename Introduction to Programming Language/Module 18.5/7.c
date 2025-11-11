#include <stdio.h>

// void summation(int a[], int n, int total) {
// 	if(n == 0) {
// 		printf("%d", total);
// 		return;
// 	}

// 	total += a[n-1];
// 	summation(a, n-1, total);
// }

int summation(int a[], int n, int total) {
	if(n == 0) {
		return total;
	}

	total += a[n-1];
	summation(a, n-1, total);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int total = 0;
	int ans = summation(a, n, total);
	printf("%d", ans);
    return 0;
}