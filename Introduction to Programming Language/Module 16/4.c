#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int is_palindrome(char ch[]) {
	int len = strlen(ch);

	bool check = 0;
	for(int i = 0, j = len-1; ch[i] != '\0'; i++, j--)
		if(ch[i] != ch[j]) {
			check = 1;
			break;
		}

	if(check) return 0;
	else return 1;
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char st[1001];
	scanf("%s", &st);

	int ans = is_palindrome(st);	
	if(ans == 1) printf("Palindrome\n");
	else printf("Not Palindrome\n");

    return 0;
}