#include <stdio.h>
#include <string.h>

int main() {
    char letter[100];
    scanf("%s", letter);

    int len = strlen(letter);
    int isPalindrome = 1; 

    for (int i = 0; i < len / 2; i++) {
        if (letter[i] != letter[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}