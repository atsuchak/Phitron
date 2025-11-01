// //1
// #include <stdio.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int star = 1, space = n-1;

// 	for(int i = 1; i <= n; i++) {
// 		for(int j = 1; j <= space; j++)
// 			printf(" ");

// 		for(int k = 1; k <= star; k++)
// 			printf("* ");

// 		printf("\n");
// 		star++;
// 		space--;
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

// 	int star = 1, space = n-1;

// 	for(int i = 1; i <= n; i++) {
// 		for(int j = 1; j <= space; j++)
// 			printf(" ");

// 		for(int k = 1; k <= star; k++)
// 			printf("%d ", k);

// 		printf("\n");
// 		star++;
// 		space--;
// 	}

//     return 0;
// }



// //3
// #include <stdio.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int star = n, space = 0;

// 	for(int i = 1; i <= n; i++) {
// 		for(int j = 1; j <= space; j++)
// 			printf(" ");

// 		for(int k = 1; k <= star; k++)
// 			printf("*");

// 		printf("\n");
// 		star--;
// 		space++;
// 	}

//     return 0;
// }



// //4
// #include <stdio.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; 
// 	scanf("%d", &n);

// 	int temp = n, space = 0;
// 	for(int i = 1; i <= n; i++) {
// 		for(int j = 1; j <= space; j++) 
// 			printf(" ");
		
// 		int star = 2*temp - 1;
// 		for(int k = 1; k <= star; k++) 
// 			printf("*");
		
// 		printf("\n");
// 		star -= 2;
// 		space++;
// 		temp--;
// 	}

//     return 0;
// }



//5
#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int charCount = 1;

	for(int i = 1; i <= n; i++) {

		char ch = 'A';
		for(int j = 1; j <= charCount; j++) {
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
		charCount++;
	}

    return 0;
}