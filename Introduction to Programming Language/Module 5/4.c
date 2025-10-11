#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch; 
	scanf("%c", &ch);

	if(ch >= 97) printf("%c\n", ch-32);
	else printf("%c\n", ch+32);

    return 0;
}