#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	for(int i = n-1; i >= 0; i--) {
		int spc = n-i;
		while(spc--) {
			printf(" ");
		}
		for(int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

    return 0;
}