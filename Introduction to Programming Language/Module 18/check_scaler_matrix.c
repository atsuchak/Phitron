#include <stdio.h>
#include <stdbool.h>

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int r, c;
	scanf("%d %d", &r, &c);

	int arr[r][c];
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);
	}

	bool is_diagonal = 1;
	bool is_scaler = 1;
	int init_val = arr[0][0];
	if(r == c){
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(i != j && arr[i][j] != 0) {
					is_diagonal = 0;
					break;
				}
				if(i == j && arr[i][j] != init_val) {
					is_scaler = 0;
				}
			}
		}

		if(is_diagonal && is_scaler)
			printf("This is scaler  matrix\n");
		else if(is_diagonal)
			printf("This is non scaler matrix\n");
		else printf("This is non diagonal matrix\n");

	} else 
	printf("This is non square matrix\n");

	return 0;
}