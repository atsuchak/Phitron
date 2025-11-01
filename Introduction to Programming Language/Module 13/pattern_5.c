#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int val = 1, space = n - 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= space; j++) 
			printf(" ");
		
		for(int k = 1; k <= val; k++) 
			printf("%d", k);
		
		printf("\n");
		val++;
		space--;
	}

    return 0;
}