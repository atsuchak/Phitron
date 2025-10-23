#include <stdio.h>
#include <string.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[10001];
    scanf("%s", &ch);

    int temp[27] = {0};
    for(int i = 0; i < strlen(ch); i++) {
        temp[ch[i] - 'a']++;
    }

    char st;
    for(int i = 0, st = 'a'; i < 27; i++, st++) {
        if(temp[i] > 0)
            printf("%c - %d\n", st, temp[i]);
    }

    return 0;
}