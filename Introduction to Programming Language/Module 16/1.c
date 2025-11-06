#include <stdio.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int hash = 1, dash = 1;

	int space = n-1;
	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= space; j++) 
			printf(" ");

		if(i%2 != 0) {
			for(int j = 1; j <= hash; j++)
				printf("#");
			
		}else {
			for(int j = 1; j <= dash; j++) {
				printf("-");
			}
			
		}

		hash += 2;
		dash += 2;
		space--;
		printf("\n");
	}

	space = 1;
	hash -= 4, dash -= 4;
	for(int i = n-1; i >= 1; i--) {
		for(int j = 1; j <= space; j++)
			printf(" ");

		if(i%2 == 0) {
			for(int j = 1; j <= dash; j++)
				printf("-");
		}else {
			for(int j = 1; j <= hash; j++)
				printf("#");
		}

		dash -= 2;
		hash -= 2;
		space++;
		printf("\n");


	}

	return 0;
}