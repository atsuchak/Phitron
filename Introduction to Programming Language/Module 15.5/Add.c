#include <stdio.h>

int summation(int a, int b) {
	int res = a+b;

	return res;
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b;
	scanf("%d %d", &a, &b);

	int ans = summation(a, b);
	printf("%d", ans);

    return 0;
}