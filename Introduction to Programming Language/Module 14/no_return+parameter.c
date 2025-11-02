#include <stdio.h>

void sum(int a, int b) {
	int ans = a+b;
	printf("%d", ans);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int a, b; 
    scanf("%d %d", &a, &b);
    
    sum(a, b);

    return 0;
}