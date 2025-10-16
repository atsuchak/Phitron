#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);

	long long int sum = 0;
	for(int i = 0; i < n; i++) sum += a[i];

	if(sum < 0) sum *= (-1);
	printf("%lld\n", sum);

    return 0;
}