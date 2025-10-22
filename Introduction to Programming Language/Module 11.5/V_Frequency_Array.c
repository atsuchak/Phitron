#include <stdio.h>

int main() {

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int freq[m];
    for(int i = 0; i <= m; i++) 
        freq[i] = 0;

    for(int i = 0; i < n; i++)
        freq[a[i]]++;

    for(int i = 1; i <= m; i++)
        printf("%d\n", freq[i]);

    return 0;
}