#include <stdio.h>
#include <string.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    char a[101], b[101];
    scanf("%s %s", &a, &b);

    if(strcmp(a, b) < 0) printf("%s", a);
    else printf("%s", b);

    return 0;
}