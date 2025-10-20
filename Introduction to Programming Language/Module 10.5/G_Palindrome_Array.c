#include <stdio.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bool check = 0;

    for(int i = 0, j = n-1; i < j; i++, j--) 
        if(arr[i] != arr[j]) {
            check = 1;
            break;
        }

    if(check)
        printf("NO\n");
    else 
        printf("YES\n");

    return 0;
}