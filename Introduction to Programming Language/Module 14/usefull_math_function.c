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