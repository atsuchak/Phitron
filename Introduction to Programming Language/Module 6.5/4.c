#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int temp = n/10;
	n %= 10;

	if(temp == 0 && n == 0) printf("YES\n"); 
	else if (n != 0 && temp%n == 0) printf("YES\n");
	else if (temp != 0 && n%temp == 0) printf("YES\n");
	else printf("NO\n");

    return 0;
}