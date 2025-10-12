#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	for(int i = 1; i <= 12; i++) {
		printf("%d * %d = %d\n", n, i, i*n);
	}

    return 0;
}