#include <stdio.h>

int main() {

    // freopen("D:/Sublmime file/input.txt", "r", stdin);
    // freopen("D:/Sublie file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	while(n > 9) {
		n /= 10;
	}

	if(n%2 == 0) printf("EVEN\n");
	else printf("ODD\n");

    return 0;
}