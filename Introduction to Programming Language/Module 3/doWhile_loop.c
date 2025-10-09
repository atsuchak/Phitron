#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int i = 1;
	do{
		printf("%d\n", i);
		i++;
	}while(i <= 50);

    return 0;
}