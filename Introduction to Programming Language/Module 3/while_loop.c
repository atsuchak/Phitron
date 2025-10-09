#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int i = 1;
	while(i <= 10) {
		printf("%d\n", i);
		i++;
	}

    return 0;
}