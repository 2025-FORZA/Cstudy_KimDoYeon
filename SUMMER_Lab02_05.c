#include <stdio.h>
#include <string.h>

int getTime(char ch) {
    if (ch >= 'A' && ch <= 'C') return 3;      
    else if (ch >= 'D' && ch <= 'F') return 4; 
    else if (ch >= 'G' && ch <= 'I') return 5; 
    else if (ch >= 'J' && ch <= 'L') return 6; 
    else if (ch >= 'M' && ch <= 'O') return 7; 
    else if (ch >= 'P' && ch <= 'S') return 8; 
    else if (ch >= 'T' && ch <= 'V') return 9;
    else if (ch >= 'W' && ch <= 'Z') return 10;
    return 0;
}

int main() {
    char word[16]; 
    scanf("%s", word);

    int totalTime = 0;
    for (int i = 0; i < strlen(word); i++) {
        totalTime += getTime(word[i]);
    }

    printf("%d\n", totalTime);
    return 0;
}