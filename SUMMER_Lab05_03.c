#include <stdio.h>

int multiply_digits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int S;
    while (1) {
        scanf("%d", &S);
        if (S == 0) break;

        printf("%d", S); 

        while (S >= 10) {
            S = multiply_digits(S);
            printf(" %d", S);
        }
        printf("\n");
    }
    return 0;
}