#include <stdio.h>

int main(void) {
    int input, result = 0;
    int remain[10];
    int check[42] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remain[i] = input % 42;
        check[remain[i]] = 1; 
    }

    for (int i = 0; i < 42; i++) {
        if (check[i] == 1) result++; 
    }

    printf("%d\n", result);
    return 0;
}
    
 