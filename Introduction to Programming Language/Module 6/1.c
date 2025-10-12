#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	bool check = 1;

	for(int i = 1; i <= n; i++) {
		if(i%2 == 0) {
			printf("%d\n", i);
			check = 0;
		}
	}

	if(check) printf("-1\n");

    return 0;
}