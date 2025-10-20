// //1
// #include <stdio.h>
// #include <limits.h>

// int main() {

// 	// freopen("D:/Sublime file/input.txt", "r", stdin);
// 	// freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n;i++) 
// 		scanf("%d", &arr[i]);

// 	int min = INT_MAX;
// 	int max = INT_MIN;

// 	for(int i = 0;i < n; i++) {
// 		if(arr[i] < arr[min]) min = i;
// 		if(arr[i] > arr[max]) max = i;
// 	}

// 	int temp = arr[min];
// 	arr[min] = arr[max];
// 	arr[max] = temp;

// 	for(int i = 0; i < n; i++) {
// 		if(i == min) arr[i] = arr[min];
// 		if(i == max) arr[i] = arr[max];
// 	}

// 	for(int i = 0; i < n; i++)
// 		printf("%d ", arr[i]);

// 	return 0;
// }


// //2
// #include <stdio.h>

// int main() {

// 	// freopen("D:/Sublime file/input.txt", "r", stdin);
// 	// freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n;i++) 
// 		scanf("%d", &arr[i]);

// 	for(int i = 0, j = n-1;i < j; i++, j--) {
// 		int temp = arr[i];
// 		arr[i] = arr[j];
// 		arr[j] = temp;	
// 	}

// 	for(int i = 0; i < n; i++)
// 		printf("%d ", arr[i]);

// 	return 0;
// }


// //3
// #include <stdio.h>

// int main() {

// 	// freopen("D:/Sublime file/input.txt", "r", stdin);
// 	// freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n; scanf("%d", &n);

// 	int arr[n];
// 	for(int i = 0; i < n;i++) 
// 		scanf("%d", &arr[i]);

// 	bool check = 1;
// 	for(int i = 0, j = n-1;i < j; i++, j--) {
// 		if(arr[i] != arr[j]) check = 0;
// 	}

// 	if(check) printf("YES\n");
// 	else printf("NO\n");

// 	return 0;
// }


//4
#include <stdio.h>
#include <limits.h>

int main() {

	// freopen("D:/Sublime file/input.txt", "r", stdin);
	// freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);

		int arr[n];
		for(int i = 0; i < n;i++) 
			scanf("%d", &arr[i]);

		int min = INT_MAX;
		for(int i = 0; i < n; i++) {
			for(int j = i+1; j < n; j++) {
				// sum = arr[i] + arr[j] + j - i;
				// if(sum < min) min = sum;
				if(arr[i] + arr[j] + j - i < min)
					min = arr[i] + arr[j] + j - i;
			}
		}
		printf("%d", min);
	}
	return 0;
}

#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]+j-i < mn)
                    mn = a[i]+a[j]+j-i;
            }
        }
        printf("%d\n",mn);
    }
}