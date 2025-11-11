#include <stdio.h>

void print(int n) {
	if(n == 0) return;

	if(n == 1) printf("%d", n);
	else printf("%d ", n);
	print(n-1);
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	print(n);

    return 0;
}