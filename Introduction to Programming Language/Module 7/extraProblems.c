// //1
// #include <stdio.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

// 	for(int i = 0; i < n; i++) {
// 		if(arr[i]%2 == 0) printf("%d ", arr[i]);
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

// 	int arr[n];
// 	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

// 	int oddCnt = 0;
// 	for(int i = 0; i < n; i++) {
// 		if(arr[i]%2 != 0) oddCnt++;
// 	}

// 	printf("%d", oddCnt);

//     return 0;
// }


// //3
// #include <stdio.h>
// #include <limits.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

// 	int maxEl = INT_MIN;
// 	for(int i = 0; i < n; i++) {
// 		if(arr[i] > maxEl) maxEl = arr[i];
// 	}

// 	printf("%d", maxEl);

//     return 0;
// }


//4
#include <stdio.h>
#include <limits.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int minEl = INT_MAX;
	for(int i = 0; i < n; i++) {
		if(arr[i] < minEl) minEl = arr[i];
	}

	printf("%d", minEl);

    return 0;
}