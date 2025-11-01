#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int star = n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= star; j++) 
			printf("* ");
		
		printf("\n");
		star--;
	}

    return 0;
}