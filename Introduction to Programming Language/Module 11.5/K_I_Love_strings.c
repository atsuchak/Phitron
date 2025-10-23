#include <stdio.h>
#include <string.h>

int main() {

    int n; 
    scanf("%d", &n);

    while(n--) {
        char a[105], b[105];
        scanf("%s %s", a, b);

        char temp[210] = {'\0'};
        int len1 = strlen(a);
        int len2 = strlen(b);
        int k = 0;

        for(int i = 0; i < len1 || i < len2; i++) {
            if(i < len1) {
                temp[k] = a[i];
                k++;    
            }
            if(i < len2) {
                temp[k] = b[i];
                k++;
            }
        }

        temp[k] = '\0';
        printf("%s\n", temp);
    }

    return 0;
}