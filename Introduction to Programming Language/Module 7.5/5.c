#include <stdio.h>
#include<limits.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

	int min = INT_MAX;
	int min_idx = -1;

	for(int i = 1; i <= n; i++) 
		if(a[i] < min) {
			min = a[i];
			min_idx = i;
		}

	printf("%d %d", min, min_idx);

    return 0;
}