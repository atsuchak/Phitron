#include <stdio.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int n, m;
	scanf("%d %d", &n, &m);

	int arr[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int x;
	scanf("%d", &x);

	bool chk = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(arr[i][j] == x){
				printf("will not take number\n");
				chk = 0;
				break;
			}
		}
	}

	if(chk)
		printf("will take number\n");

	return 0;
}