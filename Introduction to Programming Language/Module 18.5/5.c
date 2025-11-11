#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(int i = 0, j = n-1; i < j; i++, j--) {
		printf("%d %d ", a[i], a[j]);
	}

	if(n%2 != 0) printf("%d", a[n/2]);

    return 0;
}