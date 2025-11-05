#include <stdio.h>
#include <limits.h>

void max_min(int a[], int n) {
	
	int min = INT_MAX;
	int max = INT_MIN;
	for(int i = 0; i < n; i++) {
		if(a[i] < min) min = a[i];
		if(a[i] > max) max = a[i];
	}

	printf("%d %d", min, max);
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	max_min(a, n);

    return 0;
}