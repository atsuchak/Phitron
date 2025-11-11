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

	//check zero matrix
	int cnt = 0;
	int total = r*c;
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			if(arr[i][j] == 0) cnt++;
			
	if(total == cnt)
		printf("This is zero matrix\n");
	else 
		printf("This is non zero matrix\n");

	return 0;
}