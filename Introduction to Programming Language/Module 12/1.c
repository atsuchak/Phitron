#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int div2 = 0, div3 = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i]%2 == 0) div2++;
		else if(arr[i]%3 == 0) div3++;
	}

	printf("%d %d\n", div2, div3);

    return 0;
}