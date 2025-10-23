#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; 
    scanf("%d", &t);

    while(t--) {
        char ch[10001];
        scanf("%s", &ch);

        int cAlpha = 0, sAlpha = 0, digit = 0;
        for(int i = 0; ch[i] != '\0'; i++) {
            if(ch[i] >= 'A' && ch[i] <= 'Z') cAlpha++;
            else if(ch[i] >= 'a' && ch[i] <= 'z') sAlpha++;
            else digit++;
        }

        printf("%d %d %d\n", cAlpha, sAlpha, digit);
    }

    return 0;
}