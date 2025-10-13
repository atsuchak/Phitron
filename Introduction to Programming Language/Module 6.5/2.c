#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int ans;
	scanf("%d", &ans);

	if(a+b-c == ans)printf("YES\n");
	else if(a+b*c == ans)printf("YES\n");
	else if(a-b+c == ans)printf("YES\n");
	else if(a-b*c == ans)printf("YES\n");
	else if(a*b+c == ans)printf("YES\n");
	else if(a*b-c == ans)printf("YES\n");
	else printf("NO\n");

    return 0;
}