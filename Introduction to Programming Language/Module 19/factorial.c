#include <stdio.h>

int fact(int n) {
	if(n == 1) return 1;

	int ans = fact(n-1);
	return n*ans;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int ans = fact(n);
	printf("%d", ans);

    return 0;
}