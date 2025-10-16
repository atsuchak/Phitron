#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);

	int x;
	scanf("%d", &x);

	int check = -2;

	for(int i = 0; i < n; i++) {
		if(a[i] == x) {
			printf("%d", i);
			check = 0;
			break;
		}
	}

	if(check == -2) printf("-1");

    return 0;
}