#include <stdio.h>
 
long long int log_val(long long int n) {
	if(n <= 1) return 0;
 
	long long int ans = log_val(n/2);
	return ans += 1;
}
 
int main() {
 
    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);
 
	long long int n;
	scanf("%lld", &n);
 
	long long int ans = log_val(n);
	printf("%lld", ans);
 
    return 0;
}