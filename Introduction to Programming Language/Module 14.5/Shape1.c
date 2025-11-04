#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		for(int j = n; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

    return 0;
}