#include <stdio.h>

int sum() {
	int a, b; 
    scanf("%d %d", &a, &b);
    
    int ans = a+b;

    return ans;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int val = sum();
    printf("%d", val);

    return 0;
}