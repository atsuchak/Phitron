#include <stdio.h>
#include <string.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char st1[101], st2[101];
	scanf("%s %s", &st1, &st2);

	char temp[101];
	for(int i = 0; i < strlen(st1); i++) temp[i] = st1[i];

	int st1_len = strlen(st1);
	int st2_len = strlen(st2);

	//manual
	for(int i = 0; i <= st2_len; i++) 
		st1[i+st1_len] = st2[i];
	printf("%s %s\n", st1, st2);

	//buildin
	strcat(temp, st2);
	printf("%s %s\n", st1, st2);

    return 0;
}