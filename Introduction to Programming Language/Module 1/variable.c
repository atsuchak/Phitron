#include <stdio.h>
#include <stdbool.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int type1 = 10;  //4byte

	float type2 = 5.4;  //4byte

	char type3 = '@';  //1byte

	bool type4 = true;

	long long int type5 = 100000000000;  //8byte

	double type6 = 34235325452334.343;  //8byte

	printf("Int: %d\n", type1);
	printf("Float: %f\n", type2);
	printf("Char: %c\n", type3);
	printf("Bool: %d\n", type4);  //need stdbool header file
	printf("Long long int: %lld\n", type5);
	printf("Double: %lf\n", type6);

    return 0;
}