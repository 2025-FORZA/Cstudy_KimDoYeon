#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    long long factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }

    printf("%lld\n", factorial);
    return 0;
}


