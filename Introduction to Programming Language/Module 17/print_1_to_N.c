#include <stdio.h>

void print(int x, int n) {

	if(x == n+1) return;

	printf("%d\n", x);
	print(x+1, n);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	print(1, n);

    return 0;
}