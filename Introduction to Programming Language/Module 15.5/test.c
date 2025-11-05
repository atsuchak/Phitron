#include <stdio.h>

void sort_num(int a[], int n) {

    int store[n];
    for(int i = 0; i < n; i++)
        store[i] = a[i];

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d\n", a[i]);

    printf("\n");

    for(int i = 0; i < n; i++)
        printf("%d\n", store[i]);
}

int main() {

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int a[3];
    for(int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    sort_num(a, 3);

    return 0;
}