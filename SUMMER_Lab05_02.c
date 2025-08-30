#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int K[1000]; 
    for (int i = 0; i < M; i++) {
        scanf("%d", &K[i]);
    }

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            if (i % K[j] == 0) {
                sum += i;
                break; 
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}