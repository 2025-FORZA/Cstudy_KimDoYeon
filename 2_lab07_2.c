#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int list[n];
    for (int i = 0; i < n; i++) {
        list[i] = i + 1;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        int temp = list[i-1];
        list[i-1] = list[j-1];
        list[j-1] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
