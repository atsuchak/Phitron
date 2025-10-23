#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; 
    scanf("%d", &t);

    while(t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int ans = (m1*d)/(m1+m2);

        printf("%d\n", d-ans);
    }

    return 0;
}