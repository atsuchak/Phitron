#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	if(n > 0) {
		for(int i = 1; i <= n; i++) printf("%d ", i);
	}else {
		for(int i = n; i <= 0; i++) printf("%d ", i);
	}

    return 0;
}