#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int x;
	scanf("%d", &x);

	bool check = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] + a[j] == x) 
				check = 1;
		}
	}

	if(check) printf("Found\n");
	else printf("Not found\n");

    return 0;
}