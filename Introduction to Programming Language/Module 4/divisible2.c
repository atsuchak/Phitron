#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a; 
	scanf("%d", &a);

	for(int i = 1; i <= a; i++) {
		if(i % 3 == 0 && i % 7 == 0) {
			printf("%d\n", i);
		}
	}

    return 0;
}