#include <stdio.h>

char capital_to_small(char ch) {

	return ch+32;
}


// char capital_to_small() {
// 	char ch;
// 	scanf("%c", &ch);

// 	return ch + 32;
// }


// void capital_to_small(char ch) {

// 	printf("%c", ch + 32);
// }


// void capital_to_small() {
// 	char ch;
// 	scanf("%c", &ch);

// 	printf("%c", ch + 32);
// }

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch;
	scanf("%c", &ch);

	char capital = capital_to_small(ch);
	// char capital = capital_to_small();
	// capital_to_small(ch);
	// capital_to_small();

	printf("%c", capital);

    return 0;
}