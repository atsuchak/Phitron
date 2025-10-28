#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	if(n%3 == 0)
		printf("Yes\n");
	else 
		printf("No\n");

    return 0;
}