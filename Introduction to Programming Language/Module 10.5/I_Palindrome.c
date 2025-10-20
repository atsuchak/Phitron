#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char arr[100000]; 
    scanf("%s", &arr);

    bool check = 0;

    for(int i = 0, j = strlen(arr)-1; i < j; i++, j--) 
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