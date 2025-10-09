#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	for(int i = 1; i <= 10; i++) {
		if(i == 5) break;
		printf("%d\n", i);
	}

    return 0;
}