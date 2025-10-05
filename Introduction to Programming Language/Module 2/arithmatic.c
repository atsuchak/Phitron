#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int a = 10; 
	int b = 5;
	int c = 4;

	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = a % c;

	printf("Summation: %d\n", sum);
	printf("Subtraction: %d\n", sub);
	printf("Multiplication: %d\n", mul);
	printf("Division: %d\n", div);
	printf("Modulus: %d\n", mod);

	float x = 15;
	int y = 2;

	float divFloat = x / y;  //store floating division value

	printf("Division with floating value: %f", divFloat);

    return 0;
}