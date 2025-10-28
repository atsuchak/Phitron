#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch;
	scanf("%c", &ch);

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("Vowel");
	else printf("Consonant");

    return 0;
}