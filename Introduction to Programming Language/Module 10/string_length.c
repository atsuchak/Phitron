#include <stdio.h>
#include <string.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char st[100];
	scanf("%s", &st);

	int cnt = 0;
	for(int i = 0; st[i] != '\0'; i++) cnt++;

	printf("Manual string length: %d\n", cnt);

	int sz = strlen(st);
	printf("BuildIn string length: %d", sz);


    return 0;
}