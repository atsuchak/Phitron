#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char ch[100001];
	scanf("%s", &ch);

	int cnt = 0;
	for(int i = 0; ch[i] != '\0'; i++) {
		if(ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u')
			cnt++;
	}

	printf("%d\n", cnt);

    return 0;
}