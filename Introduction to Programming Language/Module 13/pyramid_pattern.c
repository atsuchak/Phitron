#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int star = 1, space = n - 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= space; j++) 
			printf(" ");
		
		for(int k = 1; k <= star; k++) 
			printf("*");
		
		printf("\n");
		star += 2;
		space--;
	}

    return 0;
}