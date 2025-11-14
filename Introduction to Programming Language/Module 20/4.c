#include <stdio.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int diff = (n-1)/2;
	int space = 6+diff-1, star = 1;
	for(int i = 0; i < 6+diff; i++) {
		for(int j = 0; j < space; j++) {
			printf(" ");
		}

		for(int j = 0; j < star; j++) {
			printf("*");
		}

		space--;
		star += 2;
		printf("\n");
	}

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 5; j++) {
			printf(" ");
		}
		for(int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}