#include <stdio.h>

void sub() {
	int a, b; 
    scanf("%d %d", &a, &b);
    
    int ans = a-b;

    printf("%d", ans);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    sub();
    
    return 0;
}