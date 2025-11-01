#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {

			//ascending
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

			// //descending
			// if(a[i] < a[j]) {
			// 	int temp = a[i];
			// 	a[i] = a[j];
			// 	a[j] = temp;
			// }	
		}
	}

	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);

    return 0;
}