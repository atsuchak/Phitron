#include <stdio.h>
#include <string.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	char s1[2001], s2[2001];
	scanf("%s %s", &s1, &s2);

	int s, e;
	scanf("%d %d", &s, &e);

	printf("%s", s1);
	while(e >= s) {
		if(s == strlen(s2)) break;
		printf("%c", s2[s]);
		s++;
	}

    return 0;
}