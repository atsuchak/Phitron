#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	long long int n;
	scanf("%lld", &n);

	while(n--) {
		long long int x;
		scanf("%lld", &x);

		do {
				printf("%lld ", x%10);
				x /= 10;
		} while(x != 0);
		
		printf("\n");
	}

    return 0;
}