#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	while(1) {
		int x; 
		scanf("%d", &x);

		if(x != 1999) printf("Wrong\n");
		else {
			printf("Correct\n");
			break;
		}
	}

    return 0;
}