#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int r, c;
	scanf("%d %d", &r, &c);

	int arr[r][c];
	for(int i = 0; i < r; i++) {  //row
		for(int j = 0; j < c; j++) {  //coloum
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

    return 0;
}