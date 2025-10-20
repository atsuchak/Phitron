#include <stdio.h>
#include <string.h>

int main() {
        char arr[100000];
        scanf("%s", &arr);

        for(int i = 0; i < strlen(arr); i++) {
            if(arr[i] >= 'a' && arr[i] <= 'z') arr[i] = arr[i] - 32;
            else if(arr[i] >= 'A' && arr[i] <= 'Z') arr[i] = arr[i] + 32;
            else arr[i] = ' ';
        }

        printf("%s", arr);


    return 0;
}