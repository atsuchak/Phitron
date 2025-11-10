// //1
// #include <stdio.h>

// void print(int n) {
// 	if(n == 0) return;

// 	printf("I love Recursion\n");
// 	print(n-1);
// }

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	print(n);

//     return 0;
// }



// //2
// #include <stdio.h>

// void print(int x, int n) {

// 	if(x == n+1) return;

// 	printf("%d\n", x);
// 	print(x+1, n);
// }

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; 
// 	scanf("%d", &n);

// 	print(1, n);

//     return 0;
// }


// //3
// #include <stdio.h>

// void print(int n) {

// 	if(n == 0) return;

// 	printf("%d\n", n);
// 	print(n-1);
// }

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; 
// 	scanf("%d", &n);

// 	print(n);

//     return 0;
// }


// //4
// #include <stdio.h>

// void reverse_print(int arr[], int n) {
// 	if(n == -1) return;

// 	if(n%2 == 0) printf("%d ", arr[n]);
// 	reverse_print(arr, n-1);
// }

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n; i++)
// 		scanf("%d", &arr[i]);

// 	reverse_print(arr, n-1);

//     return 0;
// }