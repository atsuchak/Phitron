#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; 
	scanf("%d", &n);

	char ch[n];
	for(int i = 0; i < n; i++) 
		scanf(" %c", &ch[i]);

	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += ch[i]-'0';
	}

	if(sum%3 == 0)
		printf("YES\n");
	else printf("NO\n");

    return 0;
}