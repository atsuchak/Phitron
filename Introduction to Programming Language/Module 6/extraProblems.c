// //1
#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; 
	scanf("%d", &t);

	long long int ans = 1;

	while(t--) {
		int x; 
		scanf("%d", &x);

		if(x == 0) printf("1\n");
		else { 
			while(x != 0) {
				ans *= x;
				x--;
			}
			printf("%lld\n", ans);
			ans = 1;
		}
	}

	return 0;
}


// //2
// #include <stdio.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	for(int i = 1; i <= n; i++) if(n%i == 0) printf("%d\n", i);

//     return 0;
// }


//3
// #include <stdio.h>

// int main() {

// 	// freopen("D:/Sublime file/input.txt", "r", stdin);
// 	// freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	while(n--) {
// 		int x, y;
// 		scanf("%d %d", &x, &y);

// 		int sum = 0;

// 		if(x < y) {
// 			for(int i = x+1; i < y; i++) {
// 				if(i%2 != 0) sum += i;
// 			}
// 		}else {
// 			for(int i = y+1; i < x; i++) {
// 				if(i%2 != 0) sum += i;
// 			}
// 		}

// 		printf("%d\n", sum);
// 	}

// 	return 0;
// }