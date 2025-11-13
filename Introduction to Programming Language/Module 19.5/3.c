#include <stdio.h>
#include <limits.h>


int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	int mn = INT_MAX;
	for(int i = 0; i < n; i++)
		if(a[i] < mn) mn = a[i];

	int cnt = 0;
	for(int i = 0; i < n; i++) 
		if(a[i] == mn) cnt++;

	if(cnt%2 == 0) printf("Unlucky\n");
	else printf("Lucky\n");

    return 0;
}