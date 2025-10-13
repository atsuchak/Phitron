// //1
// #include <stdio.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	for(int i = 1; i <= n; i++){
// 		for(int j = 1; j <= i; j++)
// 			printf("%d ", j);
// 		printf("\n");
// 	}

//     return 0;
// }


// //2
// #include <stdio.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	for(int i = n; i >= 1; i--) {
// 		for(int j = i; j >= 1; j--)
// 			printf("%d ", j);
// 		printf("\n");
// 	}

//     return 0;
// }


//3
#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	char ch = 'A';
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) 
			printf("%c ", ch);
		ch++;
		printf("\n");
	}

    return 0;
}