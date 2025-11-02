#include <stdio.h>

int sum(int a, int b) {
	int ans = a+b;
	return ans;
}

int sub(int a, int b) {
	int ans = a-b;
	return ans;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int a, b; 
    scanf("%d %d", &a, &b);
    int val = sum(a, b);

	int val1 = sum(10, 5);
	int val2 = sum(50, 2);
	int val3 = sub(40, 12);
	int val4 = sub(59, 23);

	printf("%d\n", val);
	printf("%d %d %d %d\n", val1, val2, val3, val4);
    return 0;
}