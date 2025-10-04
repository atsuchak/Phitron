// //1. Explain why we need long long int data type? 
// -> To overcome overflow

// //2. Write all the rules for naming a variable in C programming.
// -> 1. Can start with underscore '_'
//    2. should be contain letter, digit, underscore
//    3. can't be any keyword. ex. int, float

// //3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number. 
// ->
#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d %d", b, a);

    return 0;
}