#include <stdio.h>
#include <string.h>

int main() {
    int n; 
    scanf("%d", &n);

    while(n--) {
        char arr[100000];
        scanf("%s", &arr);

        if(strlen(arr) > 10) printf("%c%d%c\n", arr[0], strlen(arr)-2, arr[strlen(arr)-1]);
        else printf("%s\n", arr);
    }

    return 0;
}