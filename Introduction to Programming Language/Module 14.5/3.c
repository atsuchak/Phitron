#include <stdio.h>

int char_to_ascii(char ch) {

	return ch;
}


// int char_to_ascii() {
// 	char ch;
// 	scanf("%c", &ch);

// 	return ch;
// }


// void char_to_ascii(char ch) {

// 	printf("%d", ch);
// }


// void char_to_ascii() {
// 	char ch;
// 	scanf("%c", &ch);

// 	printf("%d", ch);
// }

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch;
	scanf("%c", &ch);

	int ascii_val = char_to_ascii(ch);
	// int ascii_val = char_to_ascii();
	// char_to_ascii(ch);
	// char_to_ascii();

	printf("%d", ascii_val);

    return 0;
}