#include <stdio.h>
#include <string.h>

char st[10000001];
int main() {

    scanf("%s", &st);

    int freq[26] = {0};

    for(int i = 0; st[i] != '\0'; i++) 
        freq[st[i] - 'a']++;
    
    char init;
    for(int i = 0, init = 'a'; i < 26; i++, init++) 
        if(freq[i] > 0) printf("%c : %d\n", init, freq[i]);

    return 0;
}