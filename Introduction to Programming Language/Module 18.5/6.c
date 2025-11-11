#include <stdio.h>
#include <math.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a[6][6];
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) 
			scanf("%d", &a[i][j]);
	}

	int x, y;
	for(int i = 1; i <= 5; i++) {
		for(int j = 1; j <= 5; j++) {
			if(a[i][j] == 1) {
				x = i;
				y = j;
				break;
			}
		}
	}

	
	int ans = abs(3-x) + abs(3-y);
	printf("%d", ans);

    return 0;
}