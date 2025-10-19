#include <stdio.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char st[50];
	// scanf("%s", &st);  //can't input space

	// gets(st);
	fgets(st, 5,stdin);

	printf("%s", st);

    return 0;
}