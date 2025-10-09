#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int sum = 0;

	for(int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("%d\n", sum);

    return 0;
}