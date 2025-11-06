#include <stdio.h>

void odd_even() {
	int n; 
	scanf("%d", &n);

	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int odd_cnt = 0, ev_cnt = 0;
	for(int i = 0; i < n; i++) {
		if(a[i]%2 == 0) ev_cnt++;
		else odd_cnt++;
	}

	printf("%d %d", ev_cnt, odd_cnt);
}

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	odd_even();
	
    return 0;
}