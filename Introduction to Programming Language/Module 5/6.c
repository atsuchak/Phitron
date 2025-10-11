#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	// if(a > b && a > c && b < c) printf("%d %d\n", b, a);
	// else if(a > b && a > c && c < b) printf("%d %d\n", c, a);
	// else if(b > a && b > c && a < c) printf("%d %d\n", a, b);
	// else if(b > a && b > c && c < a) printf("%d %d\n", c, b);
	// else if(c > a && c > b && a < b) printf("%d %d\n", a, c);
	// else if(c > a && c > b && b < a) printf("%d %d\n", b, c);

	if(a >= b && a >= c) {
		if(b <= c) printf("%d %d\n", b, a);
		else printf("%d %d\n", c, a);
	}else if(b >= a && b >= c) {
		if(a <= c) printf("%d %d\n", a, b);
		else printf("%d %d\n", c, b);
	}else {
		if(a <= b) printf("%d %d\n", a, c);
		else printf("%d %d\n", b, c);
	}

    return 0;
}