#include <stdio.h>

int main() {
    int N;
    char numbers[101];  

   
    scanf("%d", &N);
    scanf("%s", numbers);  

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += numbers[i] - '0';  
    }

   
    printf("%d\n", sum);

    return 0;
}