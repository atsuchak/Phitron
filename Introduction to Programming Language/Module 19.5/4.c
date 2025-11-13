#include <stdio.h>
#include <limits.h>

int mx_val(int a[], int n) {
	int mx = INT_MIN;
	for(int i = 0; i < n; i++)
		if(a[i] > mx) mx = a[i];

	return mx;
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int ans = mx_val(a, n);
	printf("%d", ans);

    return 0;
}