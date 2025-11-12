#include <stdio.h>

void print(int x) {
	if(x == 0) return;

	print(x/10);
	printf("%d ", x%10);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int t;
	scanf("%d", &t);

	while(t--) {
		int a;
		scanf("%d", &a);

		if(a == 0) printf("0");
		print(a);
		printf("\n");
	}

    return 0;
}