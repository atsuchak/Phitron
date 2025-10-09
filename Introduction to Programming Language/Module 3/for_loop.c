#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    //print 100 times hello world
	// for(int i = 1; i <= 100; i++) {
	// 	printf("Hello world\n");
	// }

	//print 1-100
	// for(int i = 1; i <= 100; i++) {
	// 	printf("%d\n", i);
	// }

	//print 100-1
	// for(int i = 100; i >= 1; i--) {
	// 	printf("%d\n", i);
	// }

	// print 1-100 only odd numbers
	// for (int i = 1; i <= 100; i+=2) {
	// 	printf("%d\n", i);
	// }

	//print 1-100 only even numbers
	// for (int i = 0; i <= 100; i+=2) {
	// 	printf("%d\n", i);
	// }

	//print 1-100 multiplies of 4
	// for (int i = 4; i <= 100; i+=4) {
	// 	printf("%d\n", i);
	// }

	//print power of 2
	for (int i = 2; i <= 100; i *= 2) {
		printf("%d\n", i);
	}

    return 0;
}