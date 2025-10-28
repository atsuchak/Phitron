#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	if(n >= 1000)
		printf("Three Kacchi\n");
	else if(n >= 500) 
		printf("One Large Pizza\n");
	else if(n >= 250) 
		printf("Three Small Burger\n");
	else if(n >= 100)
		printf("Three Fuchka\n");
	else 
		printf("Nothing\n");

    return 0;
}