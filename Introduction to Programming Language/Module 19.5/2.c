#include <stdio.h>
#include <limits.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n, k;
	scanf("%d %d", &n, &k);

	long long int a[n];
	for(int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			if(a[i] > a[j]) {
				long long int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	long long int sum = 0;
	while(k--) {
		if(a[n-1] > 0) sum += a[n-1];
		n--;
	}

	printf("%lld\n", sum);

    return 0;
}