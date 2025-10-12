#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	int evCnt = 0, oddCnt = 0, posCnt = 0, negCnt = 0;
	while(n--) {
		int x; 
		scanf("%d", &x);

		if(x%2 == 0) evCnt++;
		if(x%2 != 0) oddCnt++;
		if(x > 0) posCnt++;
		if(x < 0) negCnt++;
	}

	printf("Even: %d\n", evCnt);
	printf("Odd: %d\n", oddCnt);
	printf("Positive: %d\n", posCnt);
	printf("Negative: %d\n", negCnt);

    return 0;
}