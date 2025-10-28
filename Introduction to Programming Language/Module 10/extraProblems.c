// //1
// #include <stdio.h>
// #include <string.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char a[1001], b[1001];
// 	scanf("%s %s", &a, &b);

// 	char temp[2001];

// 	strcpy(temp, a);
// 	strcat(temp, " ");
// 	strcat(temp, b);

// 	printf("%d %d\n", strlen(a), strlen(b));
// 	printf("%s", temp);

//     return 0;
// }


// //2
// #include <stdio.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int t; 
// 	scanf("%d", &t);

// 	while(t--) {
// 		int a, b;
// 		scanf("%d %d", &a, &b);

// 		if(a == b) printf("Square\n");
// 		else printf("Rectangle\n");
// 	}

//     return 0;
// }


// //3
// #include <stdio.h>
// #include <string.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char st[100001];
// 	scanf("%s", &st);

// 	for(int i = 0; i < strlen(st); i++) {
// 		if(st[i] >= 'A' && st[i] <= 'Z') st[i] = st[i] + 32;
// 		else if(st[i] >= 'a' && st[i] <= 'z') st[i] = st[i] - 32;
// 		else st[i] = ' ';
// 	}

// 	printf("%s\n", st);



//     return 0;
// }


// //4
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char st[1001];
// 	scanf("%s", &st);

// 	bool check = 0;
// 	for(int i = 0, j = strlen(st)-1; i < j; i++, j--) {
// 		if(st[i] != st[j]) {
// 			check = 1; 
// 			break;
// 		}
// 	}

// 	if(check) printf("NO\n");
// 	else printf("YES\n");

//     return 0;
// }