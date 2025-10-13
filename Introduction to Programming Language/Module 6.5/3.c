#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) 
		if(n%i == 0) printf("%d\n", i);

    return 0;
}