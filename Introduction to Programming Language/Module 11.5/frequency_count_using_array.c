#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	int freq[6] = {0};

	//less efficient
	// for(int i = 0; i < n; i++) {
	// 	if(a[i] == 0) freq[0]++;
	// 	else if(a[i] == 1) freq[1]++;
	// 	else if(a[i] == 2) freq[2]++;
	// 	else if(a[i] == 3) freq[3]++;
	// 	else if(a[i] == 4) freq[4]++;
	// 	else if(a[i] == 5) freq[5]++;
	// }

	// printf("%d -> %d\n", 0, freq[i]);
	// printf("%d -> %d\n", 1, freq[i]);
	// printf("%d -> %d\n", 2, freq[i]);
	// printf("%d -> %d\n", 3, freq[i]);
	// printf("%d -> %d\n", 4, freq[i]);
	// printf("%d -> %d\n", 5, freq[i]);

	//more efficient
	for (int i = 0; i < n; i++)
		freq[a[i]]++;

	for(int i = 0; i < 6; i++)
		printf("%d -> %d\n", i, freq[i]);

    return 0;
}