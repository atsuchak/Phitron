#include <stdio.h>

int count_before_one(int a[], int n) {
	int cnt = 0;

	for(int i = 0; i < n; i++) {
		if(a[i] != 1) cnt++;
		else break;
	}
	
	return cnt;
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int ans = count_before_one(a, n);
	printf("%d\n", ans);

    return 0;
}