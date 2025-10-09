#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a; 
	scanf("%d", &a);

	if(a%3 == 0) {
		printf("YES\n");
	}else {
		printf("NO\n");
	}

    return 0;
}