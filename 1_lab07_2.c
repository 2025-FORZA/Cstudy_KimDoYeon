#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int weight[N], height[N], rank[N];

  
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weight[i], &height[i]);
        rank[i] = 1;
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++; 
            }
        }
    }

  
    for (int i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }

    return 0;
}