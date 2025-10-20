#include <stdio.h>
#include <string.h>

int main() {
    char st1[100000];
    char st2[100000];

    scanf("%s", &st1);
    scanf("%s", &st2);

    int sum = strlen(st1) + strlen(st2);
    printf("%d %d\n", strlen(st1), strlen(st2));

    char store[1000];
    for(int i = 0; i < strlen(st1); i++) store[i] = st1[i];

    for(int i = strlen(st1), j = 0; st2[j] != '\0'; i++, j++) 
        st1[i] = st2[j];    

    printf("%s\n", st1);

    char temp = store[0];
    store[0] = st2[0];
    st2[0] = temp;

    printf("%s %s\n", store, st2);

    return 0;
}