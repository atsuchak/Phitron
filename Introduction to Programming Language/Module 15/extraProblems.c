// //1
// Pass by value: sent only the value to a function. changing the value from function doesn't effect on main function.

// Pass by reference: sent address of the value to a function. changing the value from function does effect on main function.



// //2
// #include <stdio.h>

// void swap(int *a, int *b) {
// 	int temp = *a;
// 	*a = *b; 
// 	*b = temp;
// }

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int a, b;
// 	scanf("%d %d", &a, &b);

// 	swap(&a, &b);
// 	printf("%d %d", a, b);

//     return 0;
// }



// //3
// #include <stdio.h>

// int func(int a[], int n) {
// 	for(int i = 0; i < 5; i++)
// 		scanf("%d", &a[i]);

// 	return *a;
// }

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int a[5];
// 	func(a, 5);

// 	for(int i = 0; i < 5; i++)
// 		printf("%d ", a[i]);

//     return 0;
// }



// //4
// #include <stdio.h>

// void reverse(int a[], int n) {
// 	for(int i = 0, j = n-1; i <= j; i++, j--) {
// 		int temp = a[i];
// 		a[i] = a[j];
// 		a[j] = temp;
// 	}

// 	for(int i = 0; i < n; i++) 
// 		printf("%d ", a[i]);
// }

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int a[n];
// 	for(int i = 0; i < n; i++)
// 		scanf("%d", &a[i]);

// 	reverse(a, n);

//     return 0;
// }



// //5
// 1. First goes to array's adrress which is the 1st index of the array
// 2. Depending on the variable type it goes to next index(for int 1 index = 4 byte)
// 3. When it reach to it's desire address print the value from the adrress
