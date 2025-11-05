#include <stdio.h>
#include <math.h>

int my_abs(int n) {
	return abs(n);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a;
	scanf("%d", &a);

	int ans = my_abs(a);
	printf("%d\n", ans);

    return 0;
}