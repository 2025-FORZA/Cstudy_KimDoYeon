#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 100

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a; 
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int cards[MAX_N][MAX_M];
    int scores[MAX_N] = {0};

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &cards[i][j]);
        }
        qsort(cards[i], M, sizeof(int), compare);
    }

    
    for (int round = 0; round < M; round++) {
        int max_card = 0;
        for (int i = 0; i < N; i++) {
            if (cards[i][round] > max_card) {
                max_card = cards[i][round];
            }
        }
        for (int i = 0; i < N; i++) {
            if (cards[i][round] == max_card) {
                scores[i]++;
            }
        }
    }

    
    int max_score = 0;
    for (int i = 0; i < N; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    
    for (int i = 0; i < N; i++) {
        if (scores[i] == max_score) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}