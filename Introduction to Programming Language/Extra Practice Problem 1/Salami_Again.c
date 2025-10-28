#include <stdio.h>
#include <limits.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	int max = INT_MIN;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] > max) max = a[i];
	}

	for(int i = 0; i < n; i++)
		printf("%d ", max - a[i]);

    return 0;
}