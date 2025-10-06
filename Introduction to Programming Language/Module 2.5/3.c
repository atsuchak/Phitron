#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b;
	scanf("%d %d", &a, &b);

	(a%b == 0 || b%a == 0)? printf("Yes\n") : printf("No\n");

    return 0;
}