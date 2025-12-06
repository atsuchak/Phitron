#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) {
			if((a[i]%2 == 0 && a[j]%2 != 0) || (a[i]%2 != 0 && a[j]%2 == 0))
				cnt++;
		}
	}

	printf("%d\n", cnt/2);

    return 0;
}