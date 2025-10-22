#include <stdio.h>
#include <string.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    int n; 
    scanf("%d", &n);

    while(n--) {
        char a[10001], b[10001];
        scanf("%s %s", &a, &b);

        char temp[10001] = {'\0'};
        int len = strlen(a) + strlen(b);
        int k = 0;

        for(int i = 0; i < len; i++) {
            if(a[i] != '\0') {
                temp[k] = a[i];
                k++;    
            }
            if(b[i] != '\0') {
                temp[k] = b[i];
                k++;
            }
            if(k == len) break;
        }

        printf("%s\n", temp);
    }

    return 0;
}