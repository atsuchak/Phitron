#include <stdio.h>

int my_len(char ch[]) {

	int cnt = 0;
	for(int i = 0; ch[i] != '\0'; i++) 
		cnt++;

	return cnt;
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[100];
	scanf("%s", &ch);

	int ans = my_len(ch);
	printf("%d\n", ans);

    return 0;
}