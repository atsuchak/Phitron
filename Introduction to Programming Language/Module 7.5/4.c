#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);

	for(int i = 0; i < n; i++) {
		if(a[i] <= 10) printf("a[%d] = %d\n", i, a[i]);
	}

    return 0;
}