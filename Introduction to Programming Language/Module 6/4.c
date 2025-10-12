#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);
	int store = 0;

	while(n--) {
		int x; 
		scanf("%d", &x);

		if(x > store) store = x;
	}

	printf("%d\n", store);

    return 0;
}