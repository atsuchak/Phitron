#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	long long int a; 
	scanf("%lld", &a);

	if(a > 1000) {
		printf("I will buy Punjabi\n");
		a = a-1000;
		if (a >= 500) {
			printf("I will buy new shoes\n");
			printf("Alisa will buy new shoes\n");
		}
	} else {
		printf("Bad luck\n");
	}

    return 0;
}