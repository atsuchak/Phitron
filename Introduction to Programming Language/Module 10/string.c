#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[5];
	for(int i = 0; i < 5; i++) 
		scanf("%c", &ch[i]);

	for(int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}


    return 0;
}