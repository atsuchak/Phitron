// //1. Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)

// #include <stdio.h>

// //return+parameter
// bool check_return_parameter(int n) {
// 	if(n%2 == 0) return 1;
// 	else return 0;
// }

// //return+no_parameter
// bool check_return_noParameter() {
// 	int n;
// 	scanf("%d", &n);

// 	if(n%2 == 0) return 1;
// 	else return 0;
// }

// //no_return+parameter
// void check_noReturn_parameter(int n) {
// 	if(n%2 == 0) printf("Even\n");
// 	else printf("Odd\n");
// }

// //no_return+no_parameter
// void check_noReturn_noParameter() {
// 	int n;
// 	scanf("%d", &n);

// 	if(n%2 == 0) printf("Even\n");
// 	else printf("Odd\n");
// }

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

//     // int a;
//     // scanf("%d", &a);

// 	// bool ans_return_parameter = check_return_parameter(a);
// 	// bool ans_return_noParameter = check_return_noParameter();
// 	// check_noReturn_parameter(a);
// 	check_noReturn_noParameter();


// 	// if(ans_return_parameter) printf("Even\n");
// 	// else printf("Odd\n");

// 	// if(ans_return_noParameter) printf("Even");
// 	// else printf("Odd\n");

//     return 0;
// }




//2. Practice 6 types of math functions shown today.
#include <stdio.h>
#include <math.h>

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

    //ceil
	int ans = ceil(4.3);
	printf("Ceil: %d\n\n", ans);

	//floor
	ans = floor(4.3);
	printf("Floor: %d\n\n", ans);

	//round
	ans = round(4.3);
	printf("Round: %d\n", ans);
	ans = round(4.7);
	printf("Round: %d\n\n", ans);

	//sqrt
	ans = sqrt(36);
	printf("Square root: %d\n\n", ans);

	//pow
	ans = pow(3, 2);
	printf("Power: %d\n\n", ans);

	//abs
	ans = abs(-18);
	printf("Abs: %d\n\n", ans);

	return 0;
}