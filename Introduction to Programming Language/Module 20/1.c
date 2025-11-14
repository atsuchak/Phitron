#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; 
	scanf("%d", &t);

	while(t--) {
		long long int n, a, b, c;
		scanf("%lld %lld %lld %lld", &n, &a, &b, &c);

		long long int mul = a*b*c;
		if(n%mul != 0) printf("-1\n");
		else printf("%lld\n", n/mul);

	}

    return 0;
}