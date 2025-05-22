#include <stdio.h>
#include <string.h>

int main() {
    char S[101];  
    int alphabet[26];  

    
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

   
    scanf("%s", S);

   
    for (char c = 'a'; c <= 'z'; c++) {
        char *ptr = strchr(S, c); 
        if (ptr) 
        { alphabet[c - 'a'] = ptr - S;}
    }

 
    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    printf("\n"); 

    return 0;
}