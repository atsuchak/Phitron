#include <stdio.h>

int cnt_vowel(char ch[], int i) {
	if(ch[i] == '\0') return 0;

	int cnt = cnt_vowel(ch, i+1);
	if(ch[i] == 'A' || ch[i] == 'a'
		|| ch[i] == 'E' || ch[i] == 'e'
		|| ch[i] == 'I' || ch[i] == 'i'
		|| ch[i] == 'O' || ch[i] == 'o'
		|| ch[i] == 'U' || ch[i] == 'u')
		return cnt+1;
	else return cnt;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[201];
	fgets(ch, 2001, stdin);

	int ans = cnt_vowel(ch, 0);
	printf("%d", ans);

    return 0;
}