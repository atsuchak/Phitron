// //1
// #include <stdio.h>

// int main() {

//     // freopen("D:/Sublime file/input.txt", "r", stdin);
//     // freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n;
// 	scanf("%d", &n);

// 	int arr[n][n];
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < n; j++)
// 			scanf("%d", &arr[i][j]);
// 	}

// 	int primary_sum = 0, secondary_sum = 0;
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < n; j++){
// 			if(i == j) {
// 				primary_sum += arr[i][j];
// 			}else if(i+j == n-1) {
// 				secondary_sum += arr[i][j];
// 			}
// 		}
// 	}

// 	int ans = primary_sum - secondary_sum;
// 	if(ans < 0) printf("%d\n", ans * -1);
// 	else printf("%d\n", ans);

// 	return 0;
// }


// //2
// #include <stdio.h>

// int main() {

// 	// freopen("D:/Sublime file/input.txt", "r", stdin);
// 	// freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int n, m;
// 	scanf("%d %d", &n, &m);

// 	int arr[n][m];
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < m; j++) {
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}

// 	int x;
// 	scanf("%d", &x);

// 	bool chk = 1;
// 	for(int i = 0; i < n; i++) {
// 		for(int j = 0; j < m; j++) {
// 			if(arr[i][j] == x){
// 				printf("will not take number\n");
// 				chk = 0;
// 				break;
// 			}
// 		}
// 	}

// 	if(chk)
// 		printf("will take number\n");

// 	return 0;
// }



// //3
// #include <stdio.h>
// #include <stdbool.h>

// int main() {

// 	freopen("D:/Sublime file/input.txt", "r", stdin);
// 	freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int r, c;
// 	scanf("%d %d", &r, &c);

// 	int arr[r][c];
// 	for(int i = 0; i < r; i++){
// 		for(int j = 0; j < c; j++)
// 			scanf("%d", &arr[i][j]);
// 	}

// 	bool is_diagonal = 1;
// 	bool is_scaler = 1;
// 	int init_val = arr[0][0];
// 	if(r == c){
// 		for(int i = 0; i < r; i++){
// 			for(int j = 0; j < c; j++){
// 				if(i != j && arr[i][j] != 0) {
// 					is_diagonal = 0;
// 					break;
// 				}
// 				if(i == j && arr[i][j] != init_val) {
// 					is_scaler = 0;
// 				}
// 			}
// 		}

// 		if(is_diagonal && is_scaler)
// 			printf("This is scaler matrix\n");
// 		else if(is_diagonal)
// 			printf("This is non scaler matrix\n");
// 		else printf("This is non diagonal matrix\n");

// 	} else 
// 	printf("This is non square matrix\n");

// 	return 0;
// }



// //4
// #include <stdio.h>
// #include <stdbool.h>

// int main() {

// 	freopen("D:/Sublime file/input.txt", "r", stdin);
// 	freopen("D:/Sublime file/output.txt", "w", stdout);

// 	int r, c;
// 	scanf("%d %d", &r, &c);

// 	int arr[r][c];
// 	for(int i = 0; i < r; i++){
// 		for(int j = 0; j < c; j++)
// 			scanf("%d", &arr[i][j]);
// 	}

// 	bool is_diagonal = 1;
// 	bool is_unit = 1;
// 	if(r == c){
// 		for(int i = 0; i < r; i++){
// 			for(int j = 0; j < c; j++){
// 				if(i != j && arr[i][j] != 0) {
// 					is_diagonal = 0;
// 					break;
// 				}
// 				if(i == j && arr[i][j] != 1) {
// 					is_unit = 0;
// 				}
// 			}
// 		}

// 		if(is_diagonal && is_unit)
// 			printf("This is unit matrix\n");
// 		else if(is_diagonal)
// 			printf("This is non unit matrix\n");
// 		else printf("This is non diagonal matrix\n");

// 	} else 
// 	printf("This is non square matrix\n");

// 	return 0;
// }