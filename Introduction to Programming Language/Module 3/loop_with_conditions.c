#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	//print of even numbers
	// for(int i = 1; i <= n; i++) {
	// 	if(i%2 == 0) printf("%d\n", i);
	// }

	//print of odd numbers
	// for(int i = 1; i <= n; i++) {
	// 	if(i%2 == 1) printf("%d\n", i);
	// }

	//print even odd numbers
	for(int i = 1; i <= n; i++) {
		if(i%2 == 0) printf("%d - even\n", i);
		else printf("%d - odd\n", i);
	}

    return 0;
}