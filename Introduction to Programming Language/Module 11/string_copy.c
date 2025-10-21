#include <stdio.h>
#include <string.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char st1[101];
	char st2[101];

	scanf("%s", &st1);
	scanf("%s", &st2);

	//manual
	for(int i = 0; i <= strlen(st2); i++) 
		st1[i] = st2[i];
	printf("%s %s\n", st1, st2);

	//buildin
	strcpy(st1, st2);
	printf("%s %s\n", st1, st2);

    return 0;
}