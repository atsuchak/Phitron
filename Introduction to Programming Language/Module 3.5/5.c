#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		if(i%5 == 0) printf("%d Yes\n", i);
		else printf("%d No\n", i);
	}

    return 0;
}