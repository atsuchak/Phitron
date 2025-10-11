#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b; 
	scanf("%d %d", &a, &b);

	if(a%b == 0 || b%a == 0) printf("Multiples\n");
	else printf("No Multiples\n");

    return 0;
}