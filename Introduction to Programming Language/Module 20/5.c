#include <stdio.h>
#include <math.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; 
	scanf("%d", &t);

	while(t--) {
		int n;
		scanf("%d", &n);

		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);

		int b[n];
		for(int i = 0; i < n; i++)
			b[i] = a[i];

		for(int i = 0; i < n; i++) {
			for(int j = i; j < n; j++) {
				if(a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}

		int c[n];
		for(int i = 0; i < n; i++) {
			c[i] = abs(a[i] - b[i]);
		}

		for(int i = 0; i < n; i++)
			printf("%d ", c[i]);

		printf("\n");
	}

	return 0;
}