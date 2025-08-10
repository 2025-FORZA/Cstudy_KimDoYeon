#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    
    while (N >= 0) {
        if (N % 5 == 0) {
            count += N / 5;
            printf("%d\n", count);
            return 0;
        }
        N -= 3;
        count++;
    }

    
    printf("-1\n");
    return 0;
}