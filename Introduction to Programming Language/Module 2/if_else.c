#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int tk; 
	scanf("%d", &tk);

	if(tk >= 100) {
		printf("Burgur khabo\n");
	}else {
		printf("Burgur khabo na\n");
	}

    return 0;
}