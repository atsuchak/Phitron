#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	int x;
	scanf("%d", &x);

	if(a[x] == 1) a[x] = 0;
	else a[x] = 1;

	for(int i = 1; i <= n; i++)
		printf("%d ", a[i]);

    return 0;
}