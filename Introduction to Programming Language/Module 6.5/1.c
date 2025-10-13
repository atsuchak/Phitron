#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch;
	scanf("%c", &ch);

	if(ch == 'z') printf("a\n");
	else printf("%c\n", ch+1);

    return 0;
}