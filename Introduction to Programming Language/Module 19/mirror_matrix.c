#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

  	int r, c;
  	scanf("%d %d", &r, &c);
  	
  	int a[r][c];
  	for(int i = 0; i < r; i++) {
  		for(int j = 0; j < c; j++) {
  			scanf("%d", &a[i][j]);
  		}
  	}

  	for(int i = 0; i < r; i++) {
  		for(int j = c-1; j >= 0; j--) {
  			printf("%d ", a[i][j]);
  		}
  		printf("\n");
  	}
  

  return 0;
}