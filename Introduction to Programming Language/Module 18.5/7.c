#include <stdio.h>

void summation(long long int a[], int n, long long int total) {
	if(n == 0) {
		printf("%lld", total);
		return;
	}

	total += a[n-1];
	summation(a, n-1, total);
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	long long int a[n];
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	long long int total = 0;
	summation(a, n, total);
    return 0;
}