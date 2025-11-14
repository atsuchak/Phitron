#include <stdio.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int n, m;
	scanf("%d %d", &n, &m);

	int a[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	}

	for(int i = 0; i < m; i++) {
		printf("%d ", a[n-1][i]);
	}

	printf("\n");

	for(int i = 0; i < n; i++) {
			printf("%d ", a[i][m-1]);
	}

	return 0;
}