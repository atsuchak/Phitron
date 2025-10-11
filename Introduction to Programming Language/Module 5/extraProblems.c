// //1
// #include <stdio.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	long long int a, b;
// 	scanf("%lld %lld", &a, &b);

// 	printf("%lld + %lld = %lld\n", a, b, a+b);
// 	printf("%lld * %lld = %lld\n", a, b, a*b);
// 	printf("%lld - %lld = %lld\n", a, b, a-b);

//     return 0;
// }


//2
#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	long long int ans = (a*b) - (c*d);

	printf("Difference = %lld\n", ans); 

    return 0;
}