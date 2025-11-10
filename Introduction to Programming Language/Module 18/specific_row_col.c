#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int r, c;
	scanf("%d %d", &r, &c);

	int arr[r][c];
	for(int i = 0; i < r; i++) 
		for(int j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);

	int specific_row;
	scanf("%d", &specific_row);

	printf("Specific row: ");
	for(int i = 0; i < c; i++)
		printf("%d ", arr[specific_row][i]);
	printf("\n");

	int specific_col;
	scanf("%d", &specific_col);

	printf("Specific coloum: ");
	for(int i = 0; i < r; i++)
		printf("%d ", arr[i][specific_col]);
	printf("\n");

    return 0;
}