#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch; 
	scanf("%c", &ch);

	if(ch >= 48 && ch <= 57) printf("IS DIGIT\n");
	else if(ch >= 65 && ch <= 91) printf("ALPHA\nIS CAPITAL\n");
	else printf("ALPHA\nIS SMALL\n");

    return 0;
}