#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    char st[10];
    scanf("%s", &st);

    printf("%s\n", st);
    printf("%d", st[8]);

    return 0;
}  