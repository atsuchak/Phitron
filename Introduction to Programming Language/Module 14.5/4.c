#include <stdio.h>

char small_to_capital(char ch) {

	return ch-32;
}


// char small_to_capital() {
// 	char ch;
// 	scanf("%c", &ch);

// 	return ch-32;
// }


// void small_to_capital(char ch) {

// 	printf("%c", ch-32);
// }


// void small_to_capital() {
// 	char ch;
// 	scanf("%c", &ch);

// 	printf("%c", ch - 32);
// }

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch;
	scanf("%c", &ch);

	char capital = small_to_capital(ch);
	// char capital = small_to_capital();
	// small_to_capital(ch);
	// small_to_capital();

	printf("%c", capital);

    return 0;
}