#include <stdio.h>
#include <string.h>

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	char st1[101], st2[101];
	scanf("%s %s", &st1, &st2);

	//manual
	int i = 0;
	while(1) {
		if(st1[i] == '\0' && st2[i] == '\0') {
			printf("Equal\n");
			break;
		}else if(st1[i] == '\0') {
			printf("St1 is smaller\n");
			break;
		}else if(st2[i] == '\0') {
			printf("St2 is smaller\n");
			break;
		}else if(st1[i] < st2[i]) {
			printf("St1 is smaller\n");
			break;
		}else if(st2[i] < st1[i]) {
			printf("St2 is smaller\n");
			break;
		}else if(st1[i] == st2[i]) {
			i++;
		}
	}

	//buildin
	int check = strcmp(st1, st2);

	if(check < 0) printf("St1 is smaller\n");
	else if(check > 0) printf("St2 is smaller\n");
	else printf("Equal\n");

    return 0;
}