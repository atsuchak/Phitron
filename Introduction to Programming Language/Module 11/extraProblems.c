// //1
// #include <stdio.h>
// #include <string.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char st1[101], st2[101];
// 	scanf("%s %s", &st1, &st2);

// 	int i = 0;
// 	while(1) {
// 		if(st1[i] == '\0' && st2[i] == '\0') {
// 			printf("%s\n", st1);
// 			break;
// 		}else if(st1[i] == '\0') {
// 			printf("%s\n", st1);
// 			break;
// 		}else if(st2[i] == '\0') {
// 			printf("%s\n", st2);
// 			break;
// 		}else if(st1[i] < st2[i]) {
// 			printf("%s\n", st1);
// 			break;
// 		}else if(st2[i] < st1[i]) {
// 			printf("%s\n", st2);
// 			break;
// 		}else if(st1[i] == st2[i]) {
// 			i++;
// 		}
// 	}

//     return 0;
// }


// //2
// #include <stdio.h>
// #include <string.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char st1[101], st2[101];
// 	scanf("%s %s", &st1, &st2);

// 	if(strcmp(st1, st2) > 0) printf("%s", st2);
// 	else printf("%s", st1);

//     return 0;
// }


// //3
// #include <stdio.h>
// #include <string.h>

// int main() {

//     freopen("D:/Sublime file/input.txt", "r", stdin);
//     freopen("D:/Sublime file/output.txt", "w", stdout);

// 	char st1[101], st2[101];
// 	scanf("%s %s", &st1, &st2);

// 	for(int i = 0; i <= strlen(st2); i++) 
// 		st1[i] = st2[i];

// 	printf("%s %s\n", st1, st2);

//     return 0;
// }