#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a;
	long long b;
	float c;
	char d;

	scanf("%d\n", &a);
	scanf("%lld\n", &b);
	scanf("%f\n", &c);
	scanf("%c\n", &d);

	printf("%d\n", a);
	printf("%lld\n", b);
	printf("%.2f\n", c);
	printf("%c\n", d);

    return 0;
}