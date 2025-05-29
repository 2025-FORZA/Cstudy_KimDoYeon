#include <stdio.h>

int main() {
    int N, cow, position, count = 0;
    int locations[11];
    for (int i = 1; i <= 10; i++) locations[i] = -1; 

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &cow, &position);

        if (locations[cow] == -1) {
            locations[cow] = position;
        } else if (locations[cow] != position) {
            count++; 
            locations[cow] = position; 
        }
    }

    printf("%d\n", count);
    return 0;
}