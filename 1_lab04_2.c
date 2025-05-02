#include <stdio.h>

int main() {
    int T, i = 0;
    scanf("%d", &T);  

    while (i < T) {
        int A, B;
        scanf("%d %d", &A, &B);  
        printf("%d\n", A + B);  
        i++;  
    }

    return 0;
}
