#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    int n;
    scanf("%d", &n);

    char a[n+1];
    // scanf("%s", a);
    for(int i = 0; i < n;i++)
        scanf("%c", &a[i]);

    printf("%s\n", a);

    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i] - '0';
        
    printf("%d", sum);

    return 0;
}