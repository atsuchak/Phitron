#include <stdio.h>

void print(int n) {
	for(int i = 1; i <= n; i++)
		if(i != n) printf("%d ", i);
        else printf("%d", i);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	print(n);

    return 0;
}