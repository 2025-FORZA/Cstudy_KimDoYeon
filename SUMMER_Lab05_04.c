#include <stdio.h>
#include <string.h>

char table[4][4] = {
    {'A', 'C', 'A', 'G'}, 
    {'C', 'G', 'T', 'A'}, 
    {'A', 'T', 'C', 'G'}, 
    {'G', 'A', 'G', 'T'}  
};

int get_index(char ch) {
    switch (ch) {
        case 'A': return 0;
        case 'G': return 1;
        case 'C': return 2;
        case 'T': return 3;
    }
    return -1; 
}

int main() {
    int N;
    char dna[1000001]; 

    scanf("%d", &N);
    scanf("%s", dna);

    while (N > 1) {
        int row = get_index(dna[N - 2]);
        int col = get_index(dna[N - 1]);
        dna[N - 2] = table[row][col];
        N--; 
        dna[N] = '\0'; 
    }

    printf("%c\n", dna[0]);
    return 0;
}