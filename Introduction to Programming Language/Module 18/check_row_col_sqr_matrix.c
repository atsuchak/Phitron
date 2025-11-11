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

	//check row
	if(r == 1)
		printf("This is row matrix\n");

	//check coloum
	if(c == 1)
		printf("This is coloum matrix\n");

	//check square
	if(r == c)
		printf("This is square matrix\n");
	

    return 0;
}